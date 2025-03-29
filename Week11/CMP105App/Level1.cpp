#include "Level1.h"
#include <iostream>
using namespace std;
Level1::Level1(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;

	circle.setFillColor(sf::Color::Green);
	circle.setRadius(50);
	circle.setPosition(sf::Vector2f(100, 100));
}
Level1::~Level1()
{
}
void Level1::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Enter))
	{
		gameState->setCurrentState(State::MENU);
	}
	else if (input->isKeyDown(sf::Keyboard::Escape))
	{
		gameState->setCurrentState(State::PAUSE);
	}
}

void Level1::update(float dt)
{
}

void Level1::render()
{
	beginDraw();
	window->draw(circle);
	endDraw();
}