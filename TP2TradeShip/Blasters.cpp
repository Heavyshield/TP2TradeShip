#include "stdafx.h"
#include "Blasters.h"


Blasters::Blasters(std::string identifiant, float gaz)
{
	SetIdentifiant(identifiant);
	SetMasse(2);
	SetVolume(2);
	gazLevel = gaz;
}


Blasters::~Blasters()
{
}

void Blasters::SetGazLevel(float pourcentage)
{
	gazLevel = pourcentage;
}

float Blasters::GetGazLevel()
{
	return gazLevel;
}

bool Blasters::Recharger(float pourcentage)
{
	gazLevel = gazLevel + pourcentage;
	if (gazLevel > 100)
	{
		gazLevel = 100;
	}
	return true;
}

