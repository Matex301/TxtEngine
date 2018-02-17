#pragma once
#include "stdafx.h"
#include "Kolory.h"

#include "Przeciwnik.h"
#include "Gracz.h"
#include "Przedmiot.h"
#include "Mapa.h"
#include "Mikstura.h"

#include <vector>
#include <algorithm>
#include <list>
#include <array>
#include <deque>

#include <thread>

//Zmienne globalne

std::vector <Przeciwnik> Przeciwnicy; //Tablica obiektów przeciwników
std::vector <Przedmiot*> WszystkiePrzedmioty;
std::vector <Mapa> Mapy;

std::vector <Przedmiot*> Ekwipunek;

