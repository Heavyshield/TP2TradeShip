#include "stdafx.h"
#include "Conteneurs.h"


Conteneurs::Conteneurs(std::string identifiant, float volume, float masse)
{
	Element::SetIdentifiant(identifiant);
	Element::SetMasse(masse);
	Element::SetVolume(volume);
}


Conteneurs::~Conteneurs()
{
}



