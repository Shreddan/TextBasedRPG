#pragma once
#include <string>
class Character
{
public:
	Character(std::string &name, int &Life, int &Hunger, int &Level);
	~Character();



	//Getters
	std::string GetName() { return name; }
	int GetLife() { return Life; }
	int GetHunger() { return Hunger; }
	int GetLevel() { return Level; }
	int GetExperience() { return Experience; }


	//Setters
	std::string SetName(std::string s) { name = s; }
	int SetLife(int x) { Life = x; }
	int SetHunger(int x) { Hunger = x; }
	int SetLevel(int x) { Level = x; }
	int SetExperience(int x) { Experience = x; }


private:
	std::string name;
	int Life;
	int Hunger;
	int Level;
	int Experience;
};

