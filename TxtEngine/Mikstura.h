#pragma once
#include "Przedmiot.h"

class Mikstura :
	public Przedmiot
{
public:
	void uzyj(Gracz &gracz);
	Mikstura(string _nazwa, string _typ, string _rodzaj, int _wartosc, int _ilosc);
	~Mikstura();
};

