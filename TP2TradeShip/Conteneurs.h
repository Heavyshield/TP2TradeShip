#pragma once
#ifndef DEF_Conteneurs
#endif DEF_Conteneurs
#include <list>
#include "Vaisseaux.h"
#include "Armes.h"
#include "Element.h"
#include "string"


class Conteneurs : public Element
{
public:
	Conteneurs(std::string,float volume, float masse);
	~Conteneurs();

};

