#pragma once
#ifndef DEF_VaisseauxTransport
#endif DEF_VaisseauxTransport

#include <string>
#include "Vaisseaux.h"
#include "Conteneurs.h"
#include "Armes.h"
#include <list>
#include "VaisseauxLeger.h"
#include "VaisseauxLourd.h"





class VaisseauxTransport : public virtual Vaisseaux
{
public:

	std::list<Element*> listeElements;

	VaisseauxTransport(std::string identifiant);
	VaisseauxTransport();
	~VaisseauxTransport();

	virtual bool Charger(Element & element);
	virtual bool Decharger(Element & element);

	std::string GetType(Element element);

private:


};

