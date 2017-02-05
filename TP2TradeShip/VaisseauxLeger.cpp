#include "stdafx.h"
#include "VaisseauxLeger.h"
#include <list>

using namespace std;

VaisseauxLeger::VaisseauxLeger(std::string identifiant)
{
	Element::SetMasse(50);
	Element::SetVolume(10);
	Vaisseaux::SetMasseInitiale(50);
	Vaisseaux::SetVolumeRestant(10);
	Vaisseaux::SetMasseMaximal(60);
	Element::SetIdentifiant(identifiant);

	VaisseauxCombat::SetCapaciteArmes(2);
}

VaisseauxLeger::VaisseauxLeger()
{
}


VaisseauxLeger::~VaisseauxLeger()
{
}

bool VaisseauxLeger::EquiperArmes(Phasers & phaser) 
{
	if (CapaciteArmesSuffisante() && VolumeSuffisant(phaser.GetVolume()) && MasseSuffisante(phaser.GetMasse()))
	{
		Position position(GetIdentifiant());
		phaser.SetPosition(position);

		VaisseauxCombat::listeArmes.push_back(& phaser);
		SetVolumeRestant(GetVolumeRestant() - phaser.GetVolume());
		SetMasse(GetMasse() + phaser.GetMasse());
		SetCapaciteArmes(GetCapaciteArmes() - 1);

		return true;
	}
	else
	{
		return false;
	}
}

