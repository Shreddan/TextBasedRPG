#pragma once
#include <iostream>
#include <iomanip>
#include <chrono>
#include "Character.h"

class Game
{
	enum GameState
	{
		MainMenu,
		Playing,
		Pause,
		Options,
		Gameover
	};
public:
	Game();
	~Game();

	bool Running;

	//Startup Functions
	void Initialise(int& State);
	void Gameloop(int State);
	void CreateChar(std::vector<Character>& characters);
	void LoadChar();

	//Playing Functions
	void Promptbar(std::vector<Character> characters);
	void PlayingMenu(int& State, std::vector<Character>& characters);
	void CharacterScreen();
	void UseSkills(std::vector<Character>& characters);
	void CharLevelUp(std::vector<Character>& characters);

	//Getters
	int GetState() { return State; }

private:
	int State;
	std::vector<Character> characters;

	int Logs;
	int Ore;
	int Stone;

}; 

