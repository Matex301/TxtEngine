//Wszyskie pliki nagłówkowe
#pragma once
#include "stdafx.h"
//#include "Kolory.h"

#include "Przeciwnik.h"
#include "Gracz.h"
//#include "Przedmiot.h"
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

std::vector <Przedmiot*> przedmioty;
std::vector <Przeciwnik> przeciwnicy; //Tablica obiektów przeciwników
std::vector <Mapa> mapy;


