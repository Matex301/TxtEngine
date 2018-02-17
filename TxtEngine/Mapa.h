#pragma once
#include "stdafx.h"
//#include "Kolory.h"

#include "Gracz.h"
//#include "Przedmiot.h"
#include "Mikstura.h"
#include "Przeciwnik.h"

#include <memory>
//#include <vector>

#include "Ekwipunek.h"

using std::string;
using std::cout;
using std::endl;


class Mapa
{
public:
	class Pixel
	{
	public:
		string p;
		bool collision;

		Pixel();
		~Pixel();
	};


protected:


public:

	Mapa();

	void print(Gracz &gracz, Ekwipunek &ekwipunek, std::vector<Przedmiot*> &przedmioty, std::vector <Przeciwnik> &przeciwnicy);

	~Mapa();
};

