// TxtEngine.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <thread>

void Start();
void Update();

int main() //W metodzie void main NIC NIE ZMIENIAMY oprócz domyslnych rzeczy dla edytora
{
	Start();

	while (true) //+Dopisujemy tu wątki
	{
		std::thread UPDATE(Update); //Tworzymy wątek Update
	}

    return 0;
}

