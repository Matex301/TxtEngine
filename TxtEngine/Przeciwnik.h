#pragma once
#include "Kolory.h"

using std::string;

class Przeciwnik
{
protected:
	string nazwa;
	string typ;
	int zycie;
	int maxad;
	int minad;


public:
	Przeciwnik();
	~Przeciwnik();
};

