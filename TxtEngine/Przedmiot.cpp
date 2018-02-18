#include "stdafx.h"
#include "Przedmiot.h"


Przedmiot::Przedmiot(string _nazwa, string _typ, string _rodzaj, int _wartosc, int _ilosc)
	:nazwa(_nazwa), typ(_typ), rodzaj(_rodzaj), wartosc(_wartosc), ilosc(_ilosc), czyWybrany(false)
{
}

void Przedmiot::wyswietl()
{
	Kolory::Jasnozielony();
	if (!czyWybrany)
	{
		std::cout << nazwa << " ";
		Kolory::Czerwony();
		std::cout << "<" << ilosc << ">" << std::endl;
	}
	else
	{
		std::cout << nazwa << " ";
		Kolory::Czerwony();
		std::cout << "<" << ilosc << "> ";
		Kolory::Jasnoblekitny();
		std::cout << "<=" << std::endl;
	}

	//Do zrobienia
}

Przedmiot::~Przedmiot()
{
}
