#pragma once
#ifndef DEF_Element
#endif DEF_Element
#include <string>
#include "Position.h"


class Element
{
public:
	Element();
	virtual ~Element();
	void SetMasse(float masse);
	float GetMasse();
	void SetVolume(float volume);
	float GetVolume();
	void SetIdentifiant(std::string identifiant);
	std::string GetIdentifiant();
	void SetPosition(Position position);
	Position GetPosition();
	

private:
	float masse;
	float volume;
	std::string identifiant;
	Position position;

};

