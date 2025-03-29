#pragma once
#include "Level.h"
class Menu : public Level
{
public:
	Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud);
	~Menu();

	void handleInput(float dt) ;
	void update(float dt) ;
	void render() ;

private:
	sf::CircleShape circle;

};

