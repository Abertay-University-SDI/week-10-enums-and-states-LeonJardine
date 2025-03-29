#pragma once
#include "Level.h"
#include "Level1.h"
#include "Menu.h"
#include "Pause.h"
class LevelMan
{
public:
	LevelMan(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud);
	~LevelMan();
	void processLevel(float dt);
protected:
	int game = 0;

private:

	Level* level1;
	Level* menu;
	Level* pause;

	sf::RenderWindow* window;
	Input* input;
	AudioManager* audio;
	GameState* gameState;
	
};

