#pragma once#
#include "Kolory.h"
#include "Przedmiot.h"


class Ekwipunek :
	public std::vector<Przedmiot*>
{
public:
	void wyswietl();
	

	Ekwipunek();
	~Ekwipunek();
};