#include "stdafx.h"
#include "Mapa.h"


Mapa::Mapa(string _nazwa, int _szerokosc, int _wysokosc)
	:nazwa(_nazwa), szerokosc(_szerokosc), wysokosc(_wysokosc), pole(_szerokosc * _wysokosc)
{
}

void Mapa::print()
{
	for (int a = 0; a <= wysokosc; a++)
	{
		for (int b = 0; b<szerokosc; b++)
		{
			std::cout << Px[b + 1];
		}
		std::cout << std::endl;
	}
}

Mapa::~Mapa()
{
}
