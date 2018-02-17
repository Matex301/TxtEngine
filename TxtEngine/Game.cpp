#include "stdafx.h"
#include "Nag³ówki.h"


void Start()
{
	//Objekt gracza
	Gracz gracz("Marcel", 100, 1, 1, 10, 15, 0);


	//Dodanie wszystkich przedmiotów
	WszystkiePrzedmioty.emplace_back(&Mikstura("Nazwa", "Typ", "Rodzaj", 10, 1));

	//Dodanie domyœlnych przedmiotów do ekwipunku
	Ekwipunek.emplace_back(WszystkiePrzedmioty.at(0));

	//Dodanie wszystkich map
	Mapy.emplace_back();

	//Dodanie wszystkich przeciwników
	Przeciwnicy.emplace_back("Wilk", "Zwierze", 100, 20, 10);
	Przeciwnicy.emplace_back("Krowa", "Zwierze", 200, 1, 2);

	//TEST
	Ekwipunek.at(0)->wyswietl();

	//Start gry | Umieszczamy kolejno wszystkie mapy
	Mapy.at(0).print();
}

void Update() //Dzia³a na osobnym w¹tku
{

}