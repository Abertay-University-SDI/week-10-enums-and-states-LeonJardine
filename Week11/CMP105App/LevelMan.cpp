#include "LevelMan.h"

LevelMan::LevelMan(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	audio = aud;
	gameState = gs;

	level1 = new Level1(window, input, gameState, audio);
	menu = new Menu(window, input, gameState, audio);
	pause = new Pause(window, input, gameState, audio);
	gameState->setCurrentState(State::MENU);
}

LevelMan::~LevelMan()
{
}

void LevelMan::processLevel(float dt)
{
	
	switch (gameState->getCurrentState())
	{
	case(State::MENU):
		game = 0;
		menu->handleInput(dt);
		menu->update(dt);
		menu->render();
		break;
	case(State::LEVEL):
		game = 1;
		level1->handleInput(dt);
		level1->update(dt);
		level1->render();
		break;

	case(State::PAUSE):
		if (game == 0)
		{
			pause->handleInput(dt);
			menu->render();
		}
		else if (game == 1) 
		{
			pause->handleInput(dt);
			level1->render();
		}
		break;
	}
}


