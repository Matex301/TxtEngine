#include "stdafx.h"
#include "Nag³ówki.h"


void Start()
{
#pragma region Inicjalizacja
	//Objekt gracza
	Gracz gracz("Marcel", 100, 1, 1, 10, 15, 0);

	//Dodanie wszystkich przedmiotów

	//MIKSTURY
	Mikstura mikstura1("Mikstura HP", "Mikstura", "HP", 10, 1);
	Mikstura mikstura2("Du¿a Mikstura HP", "Mikstura", "HP", 10, 1);

	//Dodawanie tych przedmiotów do kontenera wszystkich przedmiotów
	przedmioty.push_back(&mikstura1);
	przedmioty.push_back(&mikstura2);

	//Dodanie domyœlnych przedmiotów do ekwipunku
	ekwipunek.push_back(przedmioty.at(0));

	//Dodanie wszystkich map
	mapy.emplace_back();

	//Dodanie wszystkich przeciwników
	przeciwnicy.emplace_back("Wilk", "Zwierze", 100, 20, 10);
	przeciwnicy.emplace_back("Krowa", "Zwierze", 200, 1, 2);	

	//WszystkiePrzedmioty.at(0)->wyswietl();
	//WszystkiePrzedmioty.at(1)->wyswietl();


#pragma endregion

	//Start gry | Umieszczamy kolejno wszystkie mapy
	mapy.at(0).print(gracz, ekwipunek, przedmioty, przeciwnicy);
}

void Update() //Dzia³a na osobnym w¹tku
{

}