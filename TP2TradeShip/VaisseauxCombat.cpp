#include "stdafx.h"
#include "VaisseauxCombat.h"
#include <list>


VaisseauxCombat::VaisseauxCombat()
{

}


VaisseauxCombat::~VaisseauxCombat()
{
}

void VaisseauxCombat::SetCapaciteArmes(int capacite)
{
	capaciteArmes = capacite;
}

int VaisseauxCombat::GetCapaciteArmes()
{
	return capaciteArmes;
}

bool VaisseauxCombat::CapaciteArmesSuffisante()
{
	if (capaciteArmes > 0)
	{
		return true;
	}
	return false;
}


bool VaisseauxCombat::EquiperArmes(Armes & arme)
{
	if (CapaciteArmesSuffisante() && VolumeSuffisant(arme.GetVolume()) && MasseSuffisante(arme.GetMasse()))
	{
		Position position(GetIdentifiant());
		arme.SetPosition(position);

		listeArmes.push_back(& arme);
		SetVolumeRestant(GetVolumeRestant() - arme.GetVolume());
		SetMasse(GetMasse() + arme.GetMasse());
		SetCapaciteArmes(GetCapaciteArmes() - 1);

		return true;
	}
	else
	{
		return false;
	}
}

bool VaisseauxCombat::DesequiperArmes(Armes & arme)
{
	Position position("hangar");
	arme.SetPosition(position);

	listeArmes.remove(&arme);
	SetVolumeRestant(GetVolumeRestant() + arme.GetVolume());
	SetMasse(GetMasse() - arme.GetMasse());
	SetCapaciteArmes(GetCapaciteArmes() + 1);

	return true;
}