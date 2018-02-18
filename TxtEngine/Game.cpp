#include "stdafx.h"
#include "Nag³ówki.h"
#include "Ekwipunek.h"


void Start()
{
#pragma region Inicjalizacja
	//Objekt gracza
	Gracz gracz("Marcel", 100, 1, 1, 10, 15, 0);
	Ekwipunek ekwipunek;

	//Dodanie wszystkich przedmiotów

	//MIKSTURY
	std::array<Mikstura, 4> Mikstury
	{
		Mikstura ("Mikstura HP", "Mikstura", "HP", 10, 1),
		Mikstura ("Duza Mikstura HP", "Mikstura", "HP", 10, 3),
		Mikstura("Duza Mikstura energii", "Mikstura", "energia", 10, 5),
		Mikstura("Duza Mikstura many", "Mikstura", "mana", 10, 2)
	};

	//Dodawanie tych przedmiotów do kontenera wszystkich przedmiotów
	for (int i = 0; i < Mikstury.size(); i++)
		przedmioty.push_back(&Mikstury[i]);

	//Dodanie domyœlnych przedmiotów do ekwipunku
	ekwipunek.push_back(przedmioty.at(0));
	ekwipunek.push_back(przedmioty.at(1));
	ekwipunek.push_back(przedmioty.at(2));
	ekwipunek.push_back(przedmioty.at(3));



	//Dodanie wszystkich map
	mapy.emplace_back();

	//Dodanie wszystkich przeciwników
	przeciwnicy.emplace_back("Wilk", "Zwierze", 100, 20, 10);
	przeciwnicy.emplace_back("Krowa", "Zwierze", 200, 1, 2);	

#pragma endregion

	//Start gry | Umieszczamy kolejno wszystkie mapy
	mapy.at(0).print(gracz, ekwipunek, przedmioty, przeciwnicy);
}

void Update() //Dzia³a na osobnym w¹tku
{


}