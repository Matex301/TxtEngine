//Wszyskie pliki nag��wkowe
#pragma once
#include "stdafx.h"
#include "Kolory.h"

#include "Przeciwnik.h"
#include "Gracz.h"
#include "Przedmiot.h"
#include "Mapa.h"
#include "Mikstura.h"

#include <memory>
#include <vector>
#include <algorithm>
#include <list>
#include <array>
#include <deque>

#include <thread>
#include <conio.h>
#include <time.h>
#include <cstdlib>

//Zmienne globalne

//Kontenery
std::vector <Przeciwnik> przeciwnicy; //Tablica obiekt�w przeciwnik�w
std::vector <Mapa> mapy;

std::vector <Przedmiot*> przedmioty;
std::vector <Przedmiot*> ekwipunek;

