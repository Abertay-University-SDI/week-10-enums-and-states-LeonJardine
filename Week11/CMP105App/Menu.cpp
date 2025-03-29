#include "Menu.h"
Menu::Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;

	circle.setFillColor(sf::Color::Red);
	circle.setRadius(25);
	circle.setPosition(sf::Vector2f(100, 100));
}
Menu::~Menu()
{
}
void Menu::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Space))
	{
		gameState->setCurrentState(State::LEVEL);
	}
	else if (input->isKeyDown(sf::Keyboard::Escape))
	{
		gameState->setCurrentState(State::PAUSE);
	}
}

void Menu::update(float dt)
{
}

void Menu::render()
{
	beginDraw();
	window->draw(circle);
	endDraw();
}