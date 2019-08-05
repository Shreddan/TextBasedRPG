#pragma once
#include "Skills.h"
#include <vector>
#include <math.h>
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
	int GetExpNext() { return ExpNext; }
	float GetExponent() { return Exponent; }

	//Setters
	void SetName(std::string s) { name = s; }
	void SetLife(int x) { Life = x; }
	void SetMaxLife(int x) { MaxLife = x; }
	void SetMaxHunger(int x) { MaxHunger = x; }
	void SetHunger(int x) { Hunger = x; }
	void SetLevel(int x) { Level = x; }
	void SetExperience(int x) { Experience = x; }
	void SetExpNext(int x) { ExpNext = x; }
	

	std::vector<Skills> skills;

private:
	std::string name;
	int MaxLife;
	int Life;
	int MaxHunger;
	int Hunger;
	int Level;
	int Experience;
	int ExpNext;
	float Exponent;

	int BaseDamage;
	
};

