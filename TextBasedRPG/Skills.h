#pragma once
class Skills
{
public:
	Skills();
	~Skills();


	//Getters
	int GetMiningLvl() { return MiningLvl; }
	int GetMiningXP() { return MiningXP; }
	int GetSmeltingLvl() { return SmeltingLvl; }
	int	GetSmeltingXP() { return SmeltingXP; }
	int	GetGatheringLvl() { return GatheringLvl; }
	int	GetGatheringXP() { return GatheringXP; }
	int	GetFireMakingLvl() { return FireMakingLvl; }
	int	GetFireMakingXP() { return FireMakingXP; }
	int	GetWeaponSmithingLvl() { return WeaponSmithingLvl; }
	int	GetWeaponSmithingXP() { return WeaponSmithingXP; }
	int GetArmourSmithingLvl() { return ArmourSmithingLvl; }
	int GetArmourSmithingXP() { return ArmourSmithingXP; }
	int GetCookingLvl() { return CookingLvl; }
	int GetCookingXP() { return CookingXP; }

	//Setters
	int SetMiningLvl(int x) { MiningLvl = x; }

private:

	int MiningLvl;
	int MiningXP;
	int SmeltingLvl;
	int SmeltingXP;
	int GatheringLvl;
	int GatheringXP;
	int FireMakingLvl;
	int FireMakingXP;
	int WeaponSmithingLvl;
	int WeaponSmithingXP;
	int ArmourSmithingLvl;
	int ArmourSmithingXP;
	int CookingLvl;
	int CookingXP;
};

