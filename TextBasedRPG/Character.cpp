#include "Character.h"



Character::Character(std::string &name, int &Life, int &Hunger, int &Level)
{
	this->name = name;
	this->Life = Life;
	this->Hunger = Hunger;
	this->Level = Level;
}


Character::~Character()
{
}
