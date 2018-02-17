#include "stdafx.h"
#include "Nag��wki.h"
#include "Ekwipunek.h"



void Start()
{
#pragma region Inicjalizacja
	//Objekt gracza
	Gracz gracz("Marcel", 100, 1, 1, 10, 15, 0);
	Ekwipunek ekwipunek;

	//Dodanie wszystkich przedmiot�w

	//MIKSTURY
	std::array<Mikstura, 2> Mikstury
	{
		Mikstura ("Mikstura HP", "Mikstura", "HP", 10, 1),
		Mikstura ("Du�a Mikstura HP", "Mikstura", "HP", 10, 1)
	};

	//Dodawanie tych przedmiot�w do kontenera wszystkich przedmiot�w
	for (int i = 0; i < Mikstury.size(); i++)
		przedmioty.push_back(&Mikstury[i]);

	//Dodanie domy�lnych przedmiot�w do ekwipunku
	ekwipunek.push_back(przedmioty.at(0));
	ekwipunek.push_back(przedmioty.at(1));

	//Dodanie wszystkich map
	mapy.emplace_back();

	//Dodanie wszystkich przeciwnik�w
	przeciwnicy.emplace_back("Wilk", "Zwierze", 100, 20, 10);
	przeciwnicy.emplace_back("Krowa", "Zwierze", 200, 1, 2);	



#pragma endregion

	//Start gry | Umieszczamy kolejno wszystkie mapy
	mapy.at(0).print(gracz, ekwipunek, przedmioty, przeciwnicy);
}

void Update() //Dzia�a na osobnym w�tku
{

}