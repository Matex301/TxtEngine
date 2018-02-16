#pragma once
#include "Kolory.h"

using std::string;

class Mapa
{
private:
	string nazwa;
	int szerokosc;
	int wysokosc;
	int pole;

public:

	Mapa(string _nazwa, int _szerokosc, int _wysokosc);

	void print();


	~Mapa();
};

