#pragma once
#include"Level.h"
class Pause : public  Level
{
public:
	Pause(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud);
	~Pause();
	
	void handleInput(float dt);
	void update(float dt);
	void render();
};

