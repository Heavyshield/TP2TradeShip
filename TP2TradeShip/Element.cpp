#include "stdafx.h"
#include "Element.h"


Element::Element()
{
	Position localisation("hangar");
	Element::SetPosition(localisation);
}


Element::~Element()
{
}

void Element::SetMasse(float masse)
{
	this->masse = masse;
}

float Element::GetMasse()
{
	return masse;
}

void Element::SetVolume(float volume)
{
	this->volume = volume;
}

float Element::GetVolume()
{
	return volume;
}

void Element::SetIdentifiant(std::string identifiant)
{
	this->identifiant = identifiant;
}

std::string Element::GetIdentifiant()
{
	return identifiant;
}

void Element::SetPosition(Position position)
{
	this->position = position;
}

Position Element::GetPosition()
{
	return position;
}
