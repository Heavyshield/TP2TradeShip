#include "stdafx.h"
#include "Vaisseaux.h"
#include <iostream>


using namespace std;


Vaisseaux::Vaisseaux()
{


}

Vaisseaux::~Vaisseaux()
{
}

void Vaisseaux::RafraichirMasse(float masse)
{
	if (MasseSuffisante(masse))
	{
		SetMasse(masse);
	}
}

void Vaisseaux::RafraichirVolume(float volume)
{
	if (VolumeSuffisant(volume))
	{
		volumeRestant = volume;
	}
}

bool Vaisseaux::MasseSuffisante(float masse)
{
	if (GetMasse() + masse < masseMaximal)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool Vaisseaux::VolumeSuffisant(float volume)
{
	if (volumeRestant - volume > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

float Vaisseaux::GetVolumeRestant()
{
	return volumeRestant;
}

void Vaisseaux::SetVolumeRestant(float volume)
{
	volumeRestant = volume;
}

float Vaisseaux::GetMasseInitiale()
{
	return masseInitiale;
}

void Vaisseaux::SetMasseInitiale(float masse)
{
	masseInitiale = masse;
}


float Vaisseaux::GetMasseMaximal()
{
	return masseMaximal;
}

void Vaisseaux::SetMasseMaximal(float masse)
{
	masseMaximal = masse;
}
