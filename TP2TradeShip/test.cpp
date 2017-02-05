#include "stdafx.h"
#include "test.h"
#include <iostream>

using namespace std;

test::test()
{
	
}


test::~test()
{
}


void test::test1()
{

}


void test::test2()
{

	/*
	soit un vaisseau de combat léger VC-1 (volume=10, masse=50, 2 armes max)
	on équipe VC-1 avec deux phasers (volume=1, masse=1)
	*/
	VaisseauxLeger vc1("VC-1");
	
	Phasers ph1("PH-1");
	Phasers ph2("PH-2");

	vc1.EquiperArmes(ph1);
	vc1.EquiperArmes(ph2);


	/*
	soit un vaisseau de transport VT-2 (volume=100, masse=100, cap_volume=90, cap_masse=300)
	on charge VT-2 avec 5 conteneurs (volume=1, masse=1)
	on charge VT-2 avec VC-1
	on déséquipe un des phasers de VC-1 et on le charge dans VT-2 comme du fret
	*/
	VaisseauxTransport vt2("VT-2");
	Conteneurs cn1("CN-1",1,1);
	Conteneurs cn2("CN-2", 1, 1);
	Conteneurs cn3("CN-3", 1, 1);
	Conteneurs cn4("CN-4", 1, 1);
	Conteneurs cn5("CN-5", 1, 1);

	vt2.Charger(cn1);
	vt2.Charger(cn2);
	vt2.Charger(cn3);
	vt2.Charger(cn4);
	vt2.Charger(cn5);
	vt2.Charger(vc1);
	vc1.DesequiperArmes(ph1);
	vt2.Charger(ph1);

	/*
	soit MR-63 un vieux modèle de vaisseau de transport lourd capable de se battre (volume=200, masse=150, cap_volume=180, cap_masse=600, 5 armes max)
	on équipe MR-63 avec deux blasters (volume=2, masse=2, gaz=50%), deux phasers (volume=1, masse=1), le vaisseau VT-2, et 4 conteneurs (volume=10, masse=100)
	*/
	VaisseauxHybride mr63("MR-63");
	Conteneurs cn6("CN-6", 10, 100);
	Conteneurs cn7("CN-7", 10, 100);
	Conteneurs cn8("CN-8", 10, 100);
	Conteneurs cn9("CN-9", 10, 100);
	Blasters bl1("BL-1", 50);
	Blasters bl2("BL-2", 50);
	Phasers ph3("PH-3");
	Phasers ph4("PH-4");

	mr63.EquiperArmes(bl1);
	mr63.EquiperArmes(bl2);
	mr63.EquiperArmes(ph3);
	mr63.EquiperArmes(ph4);
	mr63.Charger(cn6);
	mr63.Charger(cn7);
	/*
	Compte tenue de la masse initiale de MR-63 de 150 le total si les 4 conteneurs sont chargés dépasse la capicité de masse.
	*/
	//mr63.Charger(cn8);
	//mr63.Charger(cn9);
	mr63.Charger(vt2);
	/*
	on veut savoir quelle est la masse totale de MR - 63 (un bon gros 713) et quel est le volume disponible dans MR - 63 (il en reste pour 34)
	*/


	printf("%6.4lf",mr63.GetMasse());
	printf("%6.4lf", mr63.GetVolumeRestant());

	/*
	on veut savoir où est chacun des phasers(deux sont dans MR - 63, un est dans la soute de VT - 2, le dernier est équipé par VC - 1 qui est dans la soute de VT - 2)
	*/
	std::cout << Entreprise::Localiser(ph1) << "\n";
	std::cout << Entreprise::Localiser(ph2) << "\n";
	std::cout << Entreprise::Localiser(ph3) << "\n";
	std::cout << Entreprise::Localiser(ph4) << "\n";

	/*
	on veut connaitre le niveau de gaz des blasters équipés par MR-63, puis les recharger
	*/
	printf("%6.4lf", bl1.GetGazLevel());
	printf("%6.4lf", bl2.GetGazLevel());
	
	bl1.Recharger(100);
	bl2.Recharger(100);

}

