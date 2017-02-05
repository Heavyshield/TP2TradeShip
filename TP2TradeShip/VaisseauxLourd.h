#pragma once
#ifndef DEF_VaisseauxLourd
#endif DEF_VaisseauxLourd
#include "VaisseauxCombat.h"
#include "Phasers.h"
#include "Blasters.h"
#include <string>

class VaisseauxLourd : public VaisseauxCombat
{
public:
	VaisseauxLourd(std::string identifiant);
	~VaisseauxLourd();

};

