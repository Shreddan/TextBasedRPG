#include "Game.h"

int main()
{
	Game game;
    std::cout << "Welcome to a Text-Based RolePlaying Game!" << std::endl; 
	game.Running = true;
	game.Gameloop(game.GetState());

}


