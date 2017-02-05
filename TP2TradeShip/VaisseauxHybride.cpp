#include "stdafx.h"
#include "VaisseauxHybride.h"



VaisseauxHybride::VaisseauxHybride(std::string identifiant)
{
	Element::SetMasse(150);
	Element::SetVolume(200);
	Vaisseaux::SetMasseMaximal(600);
	Vaisseaux::SetVolumeRestant(180);
	Vaisseaux::SetMasseInitiale(150);
	Element::SetIdentifiant(identifiant);

	VaisseauxCombat::SetCapaciteArmes(5);
}


VaisseauxHybride::~VaisseauxHybride()
{
}
