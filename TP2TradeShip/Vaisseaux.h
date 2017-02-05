#pragma once
#ifndef DEF_Vaisseaux 
#endif DEF_Vaisseaux
#include "Position.h"
#include <list>
#include "Element.h"

class Vaisseaux : public Element
{
public:
	Vaisseaux();
	virtual ~Vaisseaux();

	void RafraichirMasse(float masse);
	void RafraichirVolume(float volume);
	bool MasseSuffisante(float masse);
	bool VolumeSuffisant(float volume);
	
	float GetVolumeRestant();
	void SetVolumeRestant(float volume);

	float GetMasseInitiale();
	void SetMasseInitiale(float masse);

	float GetMasseMaximal();
	void SetMasseMaximal(float masse);
	

private:
	float volumeRestant;
	float masseInitiale;
	float masseMaximal;

};

