#include "stdafx.h"
#include "Nag��wki.h"
#include "Ekwipunek.h"

void podajImie(Gracz &gracz)
{
	std::string imie;
	Kolory::Jasnozielony("Jak masz na imie?");
	std::cout << "Moje imie to ";
	std::getline(std::cin, imie);
	gracz.ustawImie(imie);
}


void Start()
{
#pragma region Inicjalizacja
	//Objekt gracza
	Gracz gracz("Marcel", 100, 1, 1, 10, 15, 0);
	Ekwipunek ekwipunek;

	//Dodanie wszystkich przedmiot�w

	//MIKSTURY
	std::array<Mikstura, 4> Mikstury
	{
		Mikstura ("Mikstura HP", "Mikstura", "HP", 10, 1),
		Mikstura ("Duza Mikstura HP", "Mikstura", "HP", 10, 3),
		Mikstura("Duza Mikstura energii", "Mikstura", "energia", 10, 5),
		Mikstura("Duza Mikstura many", "Mikstura", "mana", 10, 2)
	};

	//Dodawanie tych przedmiot�w do kontenera wszystkich przedmiot�w
	for (int i = 0; i < Mikstury.size(); i++)
		przedmioty.push_back(&Mikstury[i]);

	//Dodanie domy�lnych przedmiot�w do ekwipunku
	ekwipunek.dodaj(przedmioty, 0); 
	ekwipunek.dodaj(przedmioty, 1);
	ekwipunek.dodaj(przedmioty, 2);
	ekwipunek.dodaj(przedmioty, 3);
	ekwipunek.dodaj(przedmioty, 3); //Jak dodajemy po raz kolejny to dodajemy ilo��, a nie nowy item


	//Dodanie wszystkich map
	mapy.emplace_back();

	//Dodanie wszystkich przeciwnik�w
	przeciwnicy.emplace_back("Wilk", "Zwierze", 100, 20, 10);
	przeciwnicy.emplace_back("Krowa", "Zwierze", 200, 1, 2);	

#pragma endregion

	//Start gry | Umieszczamy kolejno wszystkie mapy
	podajImie(gracz);
	mapy.at(0).print(gracz, ekwipunek, przedmioty, przeciwnicy);
}

void Update() //Dzia�a na osobnym w�tku
{


}