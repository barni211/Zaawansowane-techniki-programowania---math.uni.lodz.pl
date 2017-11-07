#include "stdafx.h"
#include "TelephoneMap.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;


TelephoneMap::TelephoneMap()
{
	cout << "Konstruktor mapy\n";
}

TelephoneMap::TelephoneMap(string name, int number)
{
	cout << "Konstruktor parametryczny mapy\n";
	AddPhone(name, number);
}


TelephoneMap::~TelephoneMap()
{
	cout << "Destruktor mapy\n";
}

map<string, int> & TelephoneMap::phoneMap()
{
	static map<string, int> * m = new map<string, int>;
	return *m;
}

void TelephoneMap::AddPhone(string name, int number)
{
	//phoneMap().insert(name, number);// .insert(name, number);
	phoneMap()[name] = number;
}

void TelephoneMap::FindNumber(string name)
{
	//string value = ::cout<<it->first<<" "<<it->second<<std::endl;
	cout << name << "'s telephone number is " << phoneMap().find(name)->second << "\n";

	//cout  value;
}



