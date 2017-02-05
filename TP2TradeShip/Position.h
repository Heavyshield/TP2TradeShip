#pragma once
#ifndef DEF_Position
#endif DEF_Position
#include <string>

class Position
{
public:
	Position(std::string position);
	Position();
	~Position();
	std::string GetCoordonnee();
	void SetCoordonnee(std::string code);
private:
	std::string coordonnee;

};

