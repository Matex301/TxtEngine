#pragma once
#include "Kolory.h"
#include "Gracz.h"

using std::string;

class Przedmiot abstract
{
protected:
	std::string nazwa; //Nie musz� t�umaczy�
	std::string typ; //Dostepne obecnie Mikstura, pancerz, bro�
	std::string rodzaj;//Na jaki element ma dzia�a�
	int wartosc; //Wszystkimi parametrami steruje na zmienna
	int ilosc;//Ilo�� danego przedmiotu
public:
	void wyswietl();
	//virtual void uzyj(Gracz &gracz) = 0; //Musi zosta� nadpisane

	Przedmiot(string _nazwa, string _typ, string _rodzaj, int _wartosc, int _ilosc);
	virtual ~Przedmiot();
};

