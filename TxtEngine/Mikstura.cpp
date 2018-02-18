#include "stdafx.h"
#include "Mikstura.h"



Mikstura::Mikstura(string _nazwa, string _typ, string _rodzaj, int _wartosc, int _ilosc)
	:Przedmiot(_nazwa, _typ, _rodzaj, _wartosc, _ilosc)
{
}

void Mikstura::uzyj(Gracz &gracz)
{
	if (ilosc > 0)
	{
		gracz.hp += wartosc;
		if (gracz.hp > gracz.maxHp)
			gracz.hp = gracz.maxHp;
	}
}

Mikstura::~Mikstura()
{
}
