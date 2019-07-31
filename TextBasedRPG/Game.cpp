#include "Game.h"



Game::Game()
{
	State = MainMenu;
	Choice = 0;
	Running = false;
}


Game::~Game()
{
}

void Game::CreateChar()
{

}

void Game::LoadChar()
{

}

void Game::Initialise()
{
	std::cout << "This world is a strange and mysterious place, there are many different kinds of people and creatures here...." << std::endl;
	std::cout << "Do you have what it takes?" << std::endl;
	std::cout << "Make a Choice (1 - 4)" << std::endl;
	std::cout << std::endl;

	std::cout << "1. New Character" << std::endl;
	std::cout << "2. Load Character" << std::endl;
	std::cout << "3. Options" << std::endl;
	std::cout << "4. Quit" << std::endl;

	std::cin >> Choice;

	if (Choice == 1)
	{
		CreateChar();
	}
	else if (Choice == 2)
	{
		LoadChar();
	}
	else if (Choice == 3)
	{

	}
	else if (Choice == 4)
	{

	}

}

void Game::Gameloop()
{
	while (Running)
	{
		switch (State)
		{
			case MainMenu:
			{
				Initialise();
				break;
			}
			case Playing:
			{

			}
		}
	}
	
}
