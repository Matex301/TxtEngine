#pragma once
#include "Przedmiot.h"

class Mikstura :
	public Przedmiot
{
public:
	void uzyj(Gracz &gracz) override;
	Mikstura(std::string _nazwa, std::string _typ, std::string _rodzaj, int _wartosc, int _ilosc);
	~Mikstura();
};

