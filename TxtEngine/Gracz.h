#pragma once
#include <vector>
#include "Kolory.h"
#include "Przeciwnik.h"
#include "Przedmiot.h"

using std::string;

class Gracz
{
public:
	/*class Ekwipunek :public std::vector<Przedmiot>
	{

	}; */

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
	~Gracz();

	friend class Przedmiot;
	friend class Mikstura;
	friend class Mapa;
};

