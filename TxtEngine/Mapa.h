#pragma once
#include "Kolory.h"
#include <memory>

using std::string;
using std::cout;
using std::endl;


class Mapa
{
public:
	class Pixel
	{
	public:
		string p;
		bool collision;

		Pixel();
		~Pixel();
	};


protected:


public:

	Mapa();

	void print();

	~Mapa();
};

