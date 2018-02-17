#include "stdafx.h"
#include "Mapa.h"


Mapa::Pixel::Pixel()
	:p(" "), collision(false)
{

}

Mapa::Pixel::~Pixel()
{

}


Mapa::Mapa()
{
	
}

void Mapa::print()
{
	Pixel Px[20][20];



	char just_opt{ '0' };
	bool dev_mode = false;
	int just_opt_int{ 0 };
	int x{ 0 };
	int y{ 0 };
	int sz{ 20 };
	int dl{ 20 };
	int c_x{ 0 };
	int c_y{ 0 };

	dl = 20;
	sz = 20;

	while (true)
	{
		system("cls");
		////#######################Refresh######################
		for (int a = 0; a < dl; a++)
		{
			for (int b = 0; b < sz; b++)
			{
				Px[a][b].p = " ";
				if (Px[a][b].collision == true)
				{
					Px[a][b].p = "#";
				}
			}
		}
		////##################
		Px[x][y].p = "1";
		////############################Screen####################
		if (dev_mode == true)
		{
			cout << "X:" << x << " " << "Y:" << y << endl;
		}
		cout << char(201);
		for (int i = 0; i <= sz - 1; i++)
		{
			cout << char(205);
		}
		cout << char(187) << endl;
		for (int a = 0; a < dl; a++)
		{
			cout << char(186);
			for (int b = 0; b < sz; b++)
			{
				cout << Px[a][b].p;
			}
			cout << char(186) << endl;
		}
		cout << char(200);
		for (int i = 0; i <= sz - 1; i++)
		{
			cout << char(205);
		}
		cout << char(188) << endl;
		////#########################Controls###################
		just_opt = _getch();

		if (just_opt == 'w')
		{
			if (!Px[x - 1][y].collision)
			{
				if (x != 0)
				{
					x = x - 1;
				}
			}
		}

		else if (just_opt == 's')
		{
			if (!Px[x + 1][y].collision)
			{
				if (x != dl - 1)
				{
					x = x + 1;
				}
			}
		}

		else if (just_opt == 'a')
		{
			if (!Px[x][y - 1].collision)
			{
				if (y != 0)
				{
					y = y - 1;
				}
			}
		}

		else if (just_opt == 'd')
		{
			if (!Px[x][y + 1].collision)
			{
				if (y != sz - 1)
				{
					y = y + 1;
				}
			}
		}
	}
}

Mapa::~Mapa()
{
}
