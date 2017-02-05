#include "stdafx.h"
#include "Entreprise.h"


Entreprise::Entreprise()
{
}


Entreprise::~Entreprise()
{
}

std::string Entreprise::Localiser(Element element)
{
	std::string localisation = element.GetPosition().GetCoordonnee();
	return localisation;
}

