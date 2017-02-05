#pragma once
#ifndef DEF_Entreprise
#endif DEF_Entreprise
#include <string>
#include "Vaisseaux.h"
#include "Conteneurs.h"
#include "Armes.h"

class Entreprise
{
public:
	Entreprise();
	~Entreprise();
	static std::string Localiser(Element element);


};

