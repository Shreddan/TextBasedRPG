#pragma once
#include <string>
class Skills
{
public:
	Skills();
	Skills(std::string SkillName, int Level, int Exp, float GainChance);
	~Skills();

	//Getters
	std::string GetSkillName() { return SkillName; }
	int GetSkillLevel() { return Level; }

private:
	std::string SkillName;
	int Level;
	int Exp;
	float GainChance;
	float MaxChance;
};

