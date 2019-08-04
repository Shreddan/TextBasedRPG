#pragma once
#include "Skills.h"
#include <vector>
class Character
{
	
public:
	Character();
	Character(std::string name, int MaxLife, int MaxHunger, int Level);
	~Character();



	//Getters
	std::string GetName() { return name; }
	int GetLife() { return Life; }
	int GetHunger() { return Hunger; }
	int GetLevel() { return Level; }
	int GetExperience() { return Experience; }
	int GetMaxHunger() { return MaxHunger; }
	int GetMaxLife() { return MaxLife; }

	//Setters
	std::string SetName(std::string s) { name = s; }
	int SetLife(int x) { Life = x; }
	int SetHunger(int x) { Hunger = x; }
	int SetLevel(int x) { Level = x; }
	int SetExperience(int x) { Experience = x; }

	std::vector<Skills> skills;

private:
	std::string name;
	int MaxLife;
	int Life;
	int MaxHunger;
	int Hunger;
	int Level;
	int Experience;
	
};

