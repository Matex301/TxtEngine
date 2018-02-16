#pragma once
#include "Kolory.h"

using std::string; //Bezpieczniejsze ni¿ using namespace std

class Przeciwnik
{
protected:
	string nazwa;
	string typ;
	int zycie;
	int maxad;
	int minad;

public:
	Przeciwnik(string _nazwa, string typ, int _zycie, int _maxad, int _minad);
	~Przeciwnik();
};

