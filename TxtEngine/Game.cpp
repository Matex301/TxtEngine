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
	std::array<Mikstura, 2> Mikstury
	{
		Mikstura ("Mikstura HP", "Mikstura", "HP", 10, 1),
		Mikstura ("Du¿a Mikstura HP", "Mikstura", "HP", 10, 1)
	};

	//Dodawanie tych przedmiotów do kontenera wszystkich przedmiotów
	for (int i = 0; i < Mikstury.size(); i++)
		przedmioty.push_back(&Mikstury[i]);

	//Dodanie domyœlnych przedmiotów do ekwipunku
	ekwipunek.push_back(przedmioty.at(0));
	ekwipunek.push_back(przedmioty.at(1));

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
	Beep(500, 500);
	Beep(600, 400);
	Beep(700, 300);
	Sleep(50);
	Beep(600, 200);
	Beep(800, 100);
	Beep(700, 600);
	Beep(600, 400);
	Beep(700, 300);
	Beep(900, 500);
	Sleep(30);
	Beep(600, 300);
	Beep(900, 100);
	Beep(600, 300);
	Beep(300, 500);

}