#include "stdafx.h"
#include "Gracz.h"


Gracz::Gracz(string _imie, int _maxHp, int _ad, int _lvl, int _minAd, int _maxAd, int _unik)
	:imie(_imie), hp(_maxHp), maxHp(_maxHp), ad(_ad), lvl(_lvl), minAd(_minAd), maxAd(_maxAd), unik(_unik)
{
}

void Gracz::ustawImie(string _imie)
{
	this->imie = _imie;
}


Gracz::~Gracz()
{
}
