#include "Character.h"



Character::Character(std::string &name, int &Life, int &Hunger, int &Level, std::vector<Skills>& skills)
{
	this->name = name;
	this->Life = Life;
	this->Hunger = Hunger;
	this->Level = Level;
	skills.emplace_back("Mining", 1, 0, 3);
	skills.emplace_back("Foraging", 1, 0, 5);
	skills.emplace_back("Woodcutting", 1, 0, 3);
	skills.emplace_back("Smelting", 1, 0, 3);
	skills.emplace_back("Cooking", 1, 0, 8);
	skills.emplace_back("Firemaking", 1, 0, 10);
	skills.emplace_back("Weaponsmithing", 1, 0, 3);
	skills.emplace_back("Armoursmithing", 1, 0, 3);
}


Character::~Character()
{
}
