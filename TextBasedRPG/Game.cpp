#include "Game.h"



Game::Game()
{
	State = MainMenu;
	Running = false;
}


Game::~Game()
{
}

void Game::CreateChar(std::vector<Character>& characters)
{
	std::string name;
	std::cout << "What is your name?" << std::endl;
	std::cout << std::endl;
	std::cin >> name;
	std::cout << std::endl;

	characters.emplace_back(name, 30, 25, 1);
}

void Game::LoadChar()
{

} 

void Game::Initialise(int& State)
{
	int Choice = 0;
	std::cout << "This world is a strange and mysterious place, there are many different kinds of people and creatures here...." << std::endl;
	std::cout << "Do you have what it takes?" << std::endl;
	std::cout << "Make a Choice (1 - 4)" << std::endl;
	std::cout << std::endl;

	std::cout << "1. New Character" << std::endl;
	std::cout << "2. Load Character" << std::endl;
	std::cout << "3. Options" << std::endl;
	std::cout << "4. Quit" << std::endl;
	std::cout << std::endl;

	std::cin >> Choice;
	std::cout << std::endl;

	if (Choice == 1)
	{
		CreateChar(characters);
		State = Playing;
	}
	else if (Choice == 4)
	{
		
	}

}

void Game::CharacterScreen()
{
	std::cout << "Name : " << characters[0].GetName() << std::endl;
	std::cout << "Level : " << characters[0].GetLevel() << std::endl;
	std::cout << "Hunger : " << characters[0].GetLife() << " / " << characters[0].GetMaxLife() << std::endl;
	std::cout << "Hunger : " << characters[0].GetHunger() << " / " << characters[0].GetMaxHunger() << std::endl;
	std::cout << "Exp : " << characters[0].GetExperience() << std::endl;

	std::cout << std::endl;

	std::cout << "Skills : " << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < characters[0].skills.size(); i++)
	{
		std::cout << characters[0].skills[i].GetSkillName() << " - "  << characters[0].skills[i].GetSkillLevel() << std::endl;
	}
	std::cout << std::endl;
	system("pause");
}

void Game::Promptbar(std::vector<Character> characters)
{
	std::cout << "><---------------------><\\<>/><---------------------><" << std::endl;
	std::cout << std::endl;
	std::cout << characters[0].GetName() << " - " << "{ Level : " << characters[0].GetLevel() << " }" << "{ Hp : " << characters[0].GetLife() << "/" << characters[0].GetMaxLife() << " }" << "{ Hunger : " << characters[0].GetHunger() << "/" << characters[0].GetMaxHunger() << " }" << std::endl;
	std::cout << std::endl;
	std::cout << "><---------------------><\\<>/><---------------------><" << std::endl;
	std::cout << std::endl;
}

void Game::PlayingMenu(int& State)
{
	int Choice = 0;
	std::cout << "What would you like to do?" << std::endl;
	std::cout << "(Type number of choice)" << std::endl;
	std::cout << "1. Battle" << std::endl;
	std::cout << "2. Gather Resources" << std::endl;
	std::cout << "3. Shop" << std::endl;
	std::cout << "4. New Character" << std::endl;
	std::cout << "5. Character Screen" << std::endl;
	std::cout << "6. Quit" << std::endl;
	std::cin >> Choice;
	std::cout << std::endl;

	if (Choice == 5)
	{
		CharacterScreen();
	}
}

void Game::Gameloop(int State)
{
	while (Running)
	{
		switch (State)
		{
			case MainMenu:
			{
				Initialise(State);
				break;
			}
			case Playing:
			{
				Promptbar(characters);
				PlayingMenu(State);
				break;
			}
		}
	}
	
}
