#pragma once
#include <vector>
#include "Kolory.h"
#include "Przeciwnik.h"

using std::string;

class Gracz
{
protected:
	string imie;

	int hp;
	int maxHp;
	int ad;
	int lvl;
	int minAd;
	int maxAd;
	int unik;

public:
	Gracz(string _imie, int _maxHp, int _ad, int _lvl, int _minAd, int _maxAd, int _unik);
	void ustawImie(string _imie);
	~Gracz();

	friend class Przedmiot;
	friend class Mikstura;
	friend class Mapa;
};

