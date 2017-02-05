#pragma once
#ifndef DEF_VaisseauxCombat
#endif DEF_VaisseauxCombat
#include <string>
#include "Armes.h"
#include "Vaisseaux.h"
#include <list>

class VaisseauxCombat : public virtual Vaisseaux
{
public:
	VaisseauxCombat();
	virtual ~VaisseauxCombat();

	void SetCapaciteArmes(int capacite);
	int GetCapaciteArmes();

	bool CapaciteArmesSuffisante();


	virtual bool EquiperArmes(Armes & arme);

	bool DesequiperArmes(Armes & arme);

	std::list<Armes*> listeArmes;
	

private:
	int capaciteArmes;


};

