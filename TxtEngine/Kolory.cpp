#include "stdafx.h"
#include "Kolory.h"

//Metody statyczne odpowiedzialne za dany kolor
 void Kolory::Czarny( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 0);
}
 void Kolory::Niebieski( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 1);
}
 void Kolory::Zielony( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 2);
}
 void Kolory::Blekitny( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 3);
}
 void Kolory::Czerwony( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 4);
}
 void Kolory::Purpurowy( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 5);
}
 void Kolory::Zolty( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 6);
}
 void Kolory::Bialy( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 7);
}
 void Kolory::Szary( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 8);
}
 void Kolory::Jasnoniebeski( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 9);
}
 void Kolory::Jasnozielony( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 10);
}
 void Kolory::Jasnoblekitny( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 11);
}
 void Kolory::Jasnoczerwony( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 12);
}
 void Kolory::Jasnopurpurowy( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 13);
}
 void Kolory::Jasnozolty( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 14);
}
 void Kolory::Jaskrawobialy( )
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 15);
}

//Metody, które wyœwietlaj¹ od razu tekst, przyk³ad polimorfizmu
 void Kolory::Czarny(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 0);
	 std::cout << txt << std::endl;
 }
 void Kolory::Niebieski(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 1);
	 std::cout << txt << std::endl;
 }
 void Kolory::Zielony(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 2);
	 std::cout << txt << std::endl;
 }
 void Kolory::Blekitny(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 3);
	 std::cout << txt << std::endl;
 }
 void Kolory::Czerwony(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 4);
	 std::cout << txt << std::endl;
 }
 void Kolory::Purpurowy(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 5);
	 std::cout << txt << std::endl;
 }
 void Kolory::Zolty(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 6);
	 std::cout << txt << std::endl;
 }
 void Kolory::Bialy(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 7);
	 std::cout << txt << std::endl;
 }
 void Kolory::Szary(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 8);
	 std::cout << txt << std::endl;
 }
 void Kolory::Jasnoniebeski(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 9);
	 std::cout << txt << std::endl;
 }
 void Kolory::Jasnozielony(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 10);
	 std::cout << txt << std::endl;
 }
 void Kolory::Jasnoblekitny(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 11);
	 std::cout << txt << std::endl;
 }
 void Kolory::Jasnoczerwony(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 12);
	 std::cout << txt << std::endl;
 }
 void Kolory::Jasnopurpurowy(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 13);
	 std::cout << txt << std::endl;
 }
 void Kolory::Jasnozolty(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 14);
	 std::cout << txt << std::endl;
 }
 void Kolory::Jaskrawobialy(std::string txt)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 15);
	 std::cout << txt << std::endl;
 }

 //Animacje
 void Kolory::Czarny(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 0);
	 
	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Niebieski(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 1);

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;

 }
 void Kolory::Zielony(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 2);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Blekitny(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 3);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Czerwony(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 4);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Purpurowy(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 5);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Zolty(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 6);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Bialy(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 7);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Szary(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 8);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Jasnoniebeski(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 9);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Jasnozielony(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 10);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Jasnoblekitny(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 11);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Jasnoczerwony(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 12);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Jasnopurpurowy(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 13);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Jasnozolty(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 14);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }
 void Kolory::Jaskrawobialy(std::string txt, int czas)
 {
	 HANDLE hOut;
	 hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hOut, 15);
	  

	 for (int i = 0; i < txt.length(); i++)
	 {
		 std::cout << txt[i];
		 Sleep(czas);
	 }
	 std::cout << std::endl;
 }

Kolory::Kolory()
{
}


Kolory::~Kolory()
{
}
