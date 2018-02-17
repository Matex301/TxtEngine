#include "stdafx.h"
#include "Nag³ówki.h"


void Start()
{
	//Objekt gracza
	Gracz gracz("Marcel", 100, 1, 1, 10, 15, 0);
	//Inne obiekty

	WszystkiePrzedmioty.emplace_back(&Mikstura("Nazwa", "Typ", "Rodzaj", 10, 1));

	Ekwipunek.emplace_back(WszystkiePrzedmioty.at(0));


	Mapy.emplace_back();

	Przeciwnicy.emplace_back("Wilk", "Zwierze", 100, 20, 10);
	Przeciwnicy.emplace_back("Krowa", "Zwierze", 200, 1, 2);

	Ekwipunek.at(0)->wyswietl();

	//Start gry
	Mapy.at(0).print();
}

void Update()
{

}