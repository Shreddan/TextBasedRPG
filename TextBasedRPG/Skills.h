#pragma once
#include <string>
class Skills
{
public:
	Skills();
	Skills(std::string& SkillName, int& Level, int& Exp, float& GainChance);
	~Skills();

	

private:
	std::string SkillName;
	int Level;
	int Exp;
	float GainChance;
	float MaxChance;
};

