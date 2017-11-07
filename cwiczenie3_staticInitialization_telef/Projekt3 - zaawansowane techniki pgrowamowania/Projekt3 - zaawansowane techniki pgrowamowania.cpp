// Projekt3 - zaawansowane techniki pgrowamowania.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Telephone.h"
#include "TelephoneMap.h"
#include <iostream>

//w c# nie wystêpuje taki problem, mo¿na bezkarnie deklarowaæ obiekty klasy w innych klasach.


int main()
{
	//TelephoneMap phoneMap;
	
	Telephone o1("Peter", 666323233);
	Telephone o2("Jack", 700707007);
	Telephone o3("Steven", 123456789);

	TelephoneMap phoneMap;
	phoneMap.FindNumber("Peter");
	phoneMap.FindNumber("Jack");
	phoneMap.FindNumber("Steven");

	int m;
	std::cin >> m;
    return 0;
}

