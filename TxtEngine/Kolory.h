#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

enum Kolor
{
	Czarny,
	Niebieski,
	Zielony,
	Blekitny,
	Czerwony,
	Purpurowy,
	Zolty,
	Bialy,
	Szary,
	Jasnoniebieski,
	Jasnozielony,
	Jasnoblekitny,
	Jasnoczerwony,
	Jasnopurpurowy,
	Jasnozolty,
	Jaskrawobialy
};

class Kolory
{
public:
	Kolory();
	//Metody statyczne odpowiedzialne za dany kolor
	static void Czarny(std::string txt); //0
	static void Niebieski(std::string txt); //1
	static void Zielony(std::string txt); //2
	static void Blekitny(std::string txt); //3
	static void Czerwony(std::string txt); //4
	static void Purpurowy(std::string txt); //5
	static void Zolty(std::string txt); //6
	static void Bialy(std::string txt); //7
	static void Szary(std::string txt); //8
	static void Jasnoniebeski(std::string txt); //9
	static void Jasnozielony(std::string txt); //10
	static void Jasnoblekitny(std::string txt); //11
	static void Jasnoczerwony(std::string txt); //12
	static void Jasnopurpurowy(std::string txt); //13
	static void Jasnozolty(std::string txt); //14
	static void Jaskrawobialy(std::string txt); //15

	//Animacje
	static void Czarny(std::string txt, int czas); //0
	static void Niebieski(std::string txt, int czas); //1
	static void Zielony(std::string txt, int czas); //2
	static void Blekitny(std::string txt, int czas); //3
	static void Czerwony(std::string txt, int czas); //4
	static void Purpurowy(std::string txt, int czas); //5
	static void Zolty(std::string txt, int czas); //6
	static void Bialy(std::string txt, int czas); //7
	static void Szary(std::string txt, int czas); //8
	static void Jasnoniebeski(std::string txt, int czas); //9
	static void Jasnozielony(std::string txt, int czas); //10
	static void Jasnoblekitny(std::string txt, int czas); //11
	static void Jasnoczerwony(std::string txt, int czas); //12
	static void Jasnopurpurowy(std::string txt, int czas); //13
	static void Jasnozolty(std::string txt, int czas); //14
	static void Jaskrawobialy(std::string txt, int czas); //15

	//Przyk³ad polimorfizmu, mo¿e wystêpowaæ w 2 odmianach
	static void Czarny( ); //0
	static void Niebieski( ); //1
	static void Zielony( ); //2
	static void Blekitny( ); //3
	static void Czerwony( ); //4
	static void Purpurowy( ); //5
	static void Zolty( ); //6
	static void Bialy( ); //7
	static void Szary( ); //8
	static void Jasnoniebeski( ); //9
	static void Jasnozielony( ); //10
	static void Jasnoblekitny( ); //11
	static void Jasnoczerwony( ); //12
	static void Jasnopurpurowy( ); //13
	static void Jasnozolty( ); //14
	static void Jaskrawobialy( ); //15

	~Kolory();
};

