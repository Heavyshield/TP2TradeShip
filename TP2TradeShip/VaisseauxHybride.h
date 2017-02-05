#pragma once
#ifndef DEF_VaisseauxHybride
#endif DEF_VaisseauxHybride

#include "VaisseauxCombat.h"
#include "VaisseauxTransport.h"
#include <string>

class VaisseauxHybride :  public VaisseauxCombat ,  public VaisseauxTransport
{

public:
	VaisseauxHybride(std::string identifiant);
	~VaisseauxHybride();
};

