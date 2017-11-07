#include "stdafx.h"
#include "Telephone.h"
#include "TelephoneMap.h"

#include <iostream>

using namespace std;


Telephone::Telephone()
{
	cout << "Konstruktor domyœlny telefonu";
}

Telephone::Telephone(string name, int number)
{
	cout << "Konstruktor parametryczny telefonu\n";
	TelephoneMap(name, number);
}


Telephone::~Telephone()
{
	cout << "Destruktor telefonu\n";
}
