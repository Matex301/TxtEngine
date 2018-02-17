#pragma once
#include "Kolory.h"
#include "Gracz.h"

using std::string;

class Przedmiot abstract
{
protected:
	string nazwa; //Nie musz� t�umaczy�
	string typ; //Dostepne obecnie Mikstura, pancerz, bro�
	string rodzaj;//Na jaki element ma dzia�a�
	int wartosc; //Wszystkimi parametrami steruje na zmienna
	int ilosc;//Ilo�� danego przedmiotu
public:
	void wyswietl();
	virtual void uzyj(/*Gracz &gracz*/) = 0; //Musi zosta� nadpisane

	Przedmiot(string _nazwa, string _typ, string _rodzaj, int _wartosc, int _ilosc);
	virtual ~Przedmiot();
};

