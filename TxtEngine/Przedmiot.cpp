#include "stdafx.h"
#include "Przedmiot.h"


Przedmiot::Przedmiot(string _nazwa, string _typ, string _rodzaj, int _wartosc, int _ilosc)
	:nazwa(_nazwa), typ(_typ), rodzaj(_rodzaj), wartosc(_wartosc), ilosc(_ilosc)
{
}

void Przedmiot::wyswietl()
{
	system("cls");
	Kolory::Jasnozielony("Nazwa: " + nazwa);
	Kolory::Jasnoniebeski("Typ: " + typ);
	Kolory::Jasnoczerwony("Rodzaj: " + rodzaj);
	Kolory::Jasnozolty();
	std::cout << "Wartosc: " << wartosc << std::endl;
	Kolory::Jasnopurpurowy();
	std::cout << "Ilosc: " << ilosc << std::endl << std::endl;
	Kolory::Jasnoblekitny("U - Uzyj przedmiotu");
	char just_opt = _getch();

	//Do zrobienia
	switch (just_opt)
	{
	case 'u':;
	}

	system("cls");
}

Przedmiot::~Przedmiot()
{
}
