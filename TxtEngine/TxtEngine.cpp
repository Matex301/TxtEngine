// EDYCJA BEZ POWODU WZBRONIONA!
#include "stdafx.h"
#include <iostream>
#include <thread>

void Start();
void Update();

void Loop()
{
	while (true)
	{
		Update();
	}
}

int main() //W funkcji int main NIC NIE ZMIENIAMY oprócz domyslnych rzeczy dla edytora
{
	std::thread UPDATE(Loop); //Tworzymy wątek Update

	Start();

    return 0;
}

