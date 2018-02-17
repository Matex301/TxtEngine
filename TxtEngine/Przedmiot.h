#pragma once
#include "Kolory.h"
#include "Gracz.h"

using std::string;

class Przedmiot abstract
{
protected:
	string nazwa; //Nie muszê t³umaczyæ
	string typ; //Dostepne obecnie Mikstura, pancerz, broñ
	string rodzaj;//Na jaki element ma dzia³aæ
	int wartosc; //Wszystkimi parametrami steruje na zmienna
	int ilosc;//Iloœæ danego przedmiotu
public:
	void wyswietl();
	virtual void uzyj(/*Gracz &gracz*/) = 0; //Musi zostaæ nadpisane

	Przedmiot(string _nazwa, string _typ, string _rodzaj, int _wartosc, int _ilosc);
	virtual ~Przedmiot();
};

