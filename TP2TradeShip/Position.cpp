#include "stdafx.h"
#include "Position.h"


Position::Position(std::string position)
{
	coordonnee = position;
}

Position::Position()
{
	coordonnee = "hangar";
}


Position::~Position()
{
}

std::string Position::GetCoordonnee()
{
	return coordonnee;
}

void Position::SetCoordonnee(std::string code)
{
	coordonnee = code;
}
