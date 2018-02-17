#include "stdafx.h"
#include "Ekwipunek.h"

Ekwipunek::Ekwipunek()
{

}


void Ekwipunek::wyswietl()
{
	try
	{
		for (int i = 0; i < this->size(); i++)
		{
			at(i)->wyswietl();
		}
	}
	catch (...)
	{
		Kolory::Jasnoczerwony("Ekwipunek jest pusty!");
		_getch();
	}
}

Ekwipunek::~Ekwipunek()
{

}