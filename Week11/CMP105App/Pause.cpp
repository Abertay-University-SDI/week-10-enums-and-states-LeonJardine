#include "Pause.h"

Pause::Pause(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;
}

Pause::~Pause()
{
}

void Pause::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::C ))
	{
		gameState->setCurrentState(State::LEVEL);
	}
	if (input->isKeyDown(sf::Keyboard::C))
	{
		gameState->setCurrentState(State::MENU);
	}
}

void Pause::update(float dt)
{
}

void Pause::render()
{

}
