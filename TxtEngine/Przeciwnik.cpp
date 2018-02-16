#include "stdafx.h"
#include "Przeciwnik.h"

Przeciwnik::Przeciwnik(string _nazwa, string _typ, int _zycie, int _maxad, int _minad)
	:nazwa(_nazwa), typ(_typ), zycie(_zycie), maxad(_maxad), minad(_minad) //Lista inicjalizacyjna konstruktora
{
}


Przeciwnik::~Przeciwnik()
{
}
