#pragma once

#ifndef DEF_Blasters
#endif DEF_Blasters

#include "Armes.h"
#include <string>

class Blasters : public Armes
{
public:
	Blasters(std::string identifiant, float gazLevel);
	~Blasters();

	void SetGazLevel(float pourcentage);
	float GetGazLevel();
	bool Recharger(float pourcentage);
private:
	float gazLevel;
};

