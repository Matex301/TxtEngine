// TxtEngine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Kolory.h"
#include "Przeciwnik.h"
#include <vector>
#include <algorithm>

//Zmienne globalne

std::vector <Przeciwnik> Przeciwnicy; //Tablica obiektów przeciwników

int main()
{
	//TESTY DZIAŁANIA KODU PÓKI CO

	Przeciwnicy.emplace_back("Wilk", "Zwierze", 100, 20, 10);
	Przeciwnicy.emplace_back("Krowa", "Zwierze", 200, 1, 2);


    return 0;
}

