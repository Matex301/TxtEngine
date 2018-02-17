// TxtEngine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Kolory.h"

#include "Przeciwnik.h"
#include "Gracz.h"
#include "Przedmiot.h"
#include "Mapa.h"

#include <vector>
#include <algorithm>
#include <list>
#include <array>

//Zmienne globalne

std::vector <Przeciwnik> Przeciwnicy; //Tablica obiektów przeciwników
std::vector <Przedmiot> ListaPrzedmiotow;
std::vector <Mapa> Mapy;

void Start()
{
	//Mapy
	
	
	//Objekt gracza
	Gracz gracz("Marcel", 100, 1, 1, 10, 15, 0);
	//Inne obiekty
	//gracz.Ekwipunek.push_back
	
	Mapy.emplace_back();

	Przeciwnicy.emplace_back("Wilk", "Zwierze", 100, 20, 10);
	Przeciwnicy.emplace_back("Krowa", "Zwierze", 200, 1, 2);

	//Start gry
	Mapy.at(0).print();
}

void Update()
{
	
}

int main() //W metodzie void main NIC NIE ZMIENIAMY oprócz domyslnych rzeczy dla edytora
{
	Start();

	while (true) //+Dopisujemy tu wątki
	{
		Update();
	}

    return 0;
}

