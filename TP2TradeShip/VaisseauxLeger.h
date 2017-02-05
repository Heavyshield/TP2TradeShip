#pragma once
#ifndef DEF_VaisseauxLeger
#endif DEF_VaisseauxLeger
#include "Phasers.h"
#include "VaisseauxCombat.h"
#include "Position.h"
#include <string>
#include <list>

class VaisseauxLeger : public VaisseauxCombat
{
public:
	VaisseauxLeger(std::string identifiant);
	VaisseauxLeger();
	~VaisseauxLeger();

	bool EquiperArmes(Phasers & phaser);


};

