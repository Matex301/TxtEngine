// EDYCJA BEZ POWODU WZBRONIONA!
#include "stdafx.h"
#include <iostream>
#include <thread>

void Start();
void Update();

int main() //W funkcji int main NIC NIE ZMIENIAMY oprócz domyslnych rzeczy dla edytora
{
	Start();

	while (true) //+Dopisujemy tu wątki
	{
		std::thread UPDATE(Update); //Tworzymy wątek Update
	}

    return 0;
}

