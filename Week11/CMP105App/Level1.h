#pragma once
#include"Level.h"
class Level1 : public Level
{
public:
	Level1(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud);
	~Level1();

	void handleInput(float dt) ;
	void update(float dt) ;
	void render() ;
private:
	sf::CircleShape circle;
	
};

