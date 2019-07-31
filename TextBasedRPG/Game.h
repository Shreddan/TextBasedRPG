#pragma once
#include <iostream>
#include <vector>
#include "Character.h"

class Game
{
	enum GameState
	{
		MainMenu,
		Playing,
		Pause,
		CharacterScreen,
		Inventory,
		Options,
		Gameover
	};
public:
	Game();
	~Game();

	bool Running;

	//Functions
	void Initialise();
	void Gameloop();
	void CreateChar();
	void LoadChar();

	//Getters
	int GetState() { return State; }

	//Setters
	int SetState(int x) { State = x; }

private:
	int State;
	int Choice;
	std::vector<Character> characters;
};

