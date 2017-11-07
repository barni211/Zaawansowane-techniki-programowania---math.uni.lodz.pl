#pragma once
#include <string>
#include <map>

using namespace std;

//dodaj konstruktor prywatny i metode zwracajaca obiekt
//static Object & myObject()
//{
//	static Object *o = new Object();
//	return o;
//}

class TelephoneMap
{
private:
	static map<string, int> & phoneMap();
public:
	TelephoneMap();
	TelephoneMap(string name, int number);
	~TelephoneMap();
	void AddPhone(string name, int number);
	void FindNumber(string name);
};

