#include "Skills.h"



Skills::Skills()
{
	
}

Skills::Skills(std::string SkillName, int Level, int Exp, float GainChance)
{
	this->SkillName = SkillName;
	this->Level = Level;
	this->Exp = Exp;
	this->GainChance = GainChance;
}


Skills::~Skills()
{
}
