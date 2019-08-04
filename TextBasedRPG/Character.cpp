#include "Character.h"

Character::Character()
{

}

Character::Character(std::string name, int MaxLife, int MaxHunger, int Level)
{
	this->name = name;
	this->MaxLife = MaxLife;
	this->Life = MaxLife;
	this->MaxHunger = MaxHunger;
	this->Hunger = MaxHunger;
	this->Level = Level;
	this->Experience = 0;
	skills.emplace_back("Mining", 1, 0, 3.f);
	skills.emplace_back("Foraging", 1, 0, 5.f);
	skills.emplace_back("Hunting", 1, 0, 4.f);
	skills.emplace_back("Smithing", 1, 0, 3.f);
	skills.emplace_back("Construction", 1, 0, 6.f);
	skills.emplace_back("FirstAid", 1, 0, 3.f);
}


Character::~Character()
{
}
