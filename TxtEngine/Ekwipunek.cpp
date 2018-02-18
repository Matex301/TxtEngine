#include "stdafx.h"
#include "Ekwipunek.h"

Ekwipunek::Ekwipunek()
{

}


void Ekwipunek::wyswietl()
{
	char just_opt;
	int wybor{ 0 };
	system("cls");
	
	do
	{
		if (empty())
			return;

		system("cls");
		try
		{
			for (int i = 0; i < size(); i++)
			{
				if (i == wybor)
					at(i)->czyWybrany = true;
				else at(i)->czyWybrany = false;
			}

			for (int i = 0; i < this->size(); i++)
			{
				at(i)->wyswietl();
			}

			just_opt = _getch();

		}
		catch (...)
		{
			system("cls");
			Kolory::Jasnoczerwony("Ekwipunek jest pusty!");
		}

		switch (just_opt)
		{
		case 'a':
		{
			wybor--;
			if (wybor < 0)
			{
				if (!empty())
					wybor = size() - 1;
				else return;
			}
		}	break;
		case 'd':
		{
			wybor++;
			if (wybor >= size())
			{
				if (!empty())
					wybor = 0;
				else return;
			}
		}	break;

		case 'u':
		{
			at(wybor)->ilosc--;
			if (at(wybor)->ilosc <= 0)
			{
				erase(begin() + wybor);

				if (!empty())
				{
					if (wybor > 0)
						wybor--;
					else wybor = size() - 1;
				}
				else return;
			}

		}

		}


	}
	while (just_opt != 'e');

	 

}

void Ekwipunek::dodaj(std::vector <Przedmiot*> wszystkieprzedmioty, int id)
{
	bool czyJest{ false }; //Prawda, je¿eli jest taki przedmiot w ekwipunku

	for (int i = 0; i < size(); i++)
	{
		if (at(i)->nazwa == wszystkieprzedmioty.at(id)->nazwa)
		{
			at(i)->ilosc += wszystkieprzedmioty.at(id)->ilosc;
			czyJest = true;
			break;
		}
	}

	if(!czyJest)
		push_back(wszystkieprzedmioty.at(id));
}

Ekwipunek::~Ekwipunek()
{

}