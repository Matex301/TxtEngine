#pragma once#
#include "Kolory.h"
#include "Przedmiot.h"


class Ekwipunek :
	public std::vector<Przedmiot*>
{
public:
	void wyswietl(Gracz &gracz);
	void dodaj(std::vector <Przedmiot*> wszystkieprzedmioty, int id);

	Ekwipunek();
	~Ekwipunek();
};