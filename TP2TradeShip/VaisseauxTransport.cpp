#include "stdafx.h"
#include "VaisseauxTransport.h"
#include <list>
#include <string>

using namespace std;

VaisseauxTransport::VaisseauxTransport(std::string identifiant)
{

	Element::SetMasse(100);
	Element::SetVolume(100);
	Vaisseaux::SetVolumeRestant(90);
	Vaisseaux::SetMasseMaximal(300);
	Vaisseaux::SetMasseInitiale(100);

	Element::SetIdentifiant(identifiant);

}

VaisseauxTransport::VaisseauxTransport()
{
}


VaisseauxTransport::~VaisseauxTransport()
{
}

bool VaisseauxTransport::Charger(Element & element)
{
	if (VolumeSuffisant(element.GetVolume()) && MasseSuffisante(element.GetMasse()))
	{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
		Position position(GetIdentifiant());
		element.SetPosition(position);

	    listeElements.push_back(& element);
		SetVolumeRestant(GetVolumeRestant() - element.GetVolume());
		SetMasse(GetMasse() + element.GetMasse());

		return true;
	}
	else
	{
		return false;
	}

}


bool VaisseauxTransport::Decharger(Element & element)
{
	Position position("hangar");
	element.SetPosition(position);

	SetVolumeRestant(GetVolumeRestant() + element.GetVolume());
	SetMasse(GetMasse() - element.GetMasse());
	listeElements.remove(&element);

	return true;
}



std::string VaisseauxTransport::GetType(Element element)
{
	string identifiant = element.GetIdentifiant();
	string typeCode = identifiant.substr(0, 2);
	
	if (typeCode == "VT")
	{
		return("VaisseauTransport");
	}
	else if (typeCode == "MR")
	{
		return("VaisseauHybride");
	}
	else if (typeCode == "VC")
	{
		return("VaisseauLeger");
	}
	else if (typeCode == "VL")
	{
		return("VaisseauLourd");
	}
	else if (typeCode == "CN")
	{
		return("Conteneur");
	}
	else if (typeCode == "PH")
	{
		return("Phaser");
	}
	else if (typeCode == "BL")
	{
		return("Blaster");
	}
	else
	{
		return "";
	}

}






