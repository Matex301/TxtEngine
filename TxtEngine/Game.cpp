#include "stdafx.h"
#include "Nag��wki.h"


void Start()
{
#pragma region Inicjalizacja
	//Objekt gracza
	Gracz gracz("Marcel", 100, 1, 1, 10, 15, 0);

	//Dodanie wszystkich przedmiot�w

	//MIKSTURY
	Mikstura mikstura1("Mikstura HP", "Mikstura", "HP", 10, 1);
	Mikstura mikstura2("Du�a Mikstura HP", "Mikstura", "HP", 10, 1);

	//Dodawanie tych przedmiot�w do kontenera wszystkich przedmiot�w
	przedmioty.push_back(&mikstura1);
	przedmioty.push_back(&mikstura2);

	//Dodanie domy�lnych przedmiot�w do ekwipunku
	ekwipunek.push_back(przedmioty.at(0));

	//Dodanie wszystkich map
	mapy.emplace_back();

	//Dodanie wszystkich przeciwnik�w
	przeciwnicy.emplace_back("Wilk", "Zwierze", 100, 20, 10);
	przeciwnicy.emplace_back("Krowa", "Zwierze", 200, 1, 2);	

	//WszystkiePrzedmioty.at(0)->wyswietl();
	//WszystkiePrzedmioty.at(1)->wyswietl();


#pragma endregion

	//Start gry | Umieszczamy kolejno wszystkie mapy
	mapy.at(0).print(gracz, ekwipunek, przedmioty, przeciwnicy);
}

void Update() //Dzia�a na osobnym w�tku
{

}