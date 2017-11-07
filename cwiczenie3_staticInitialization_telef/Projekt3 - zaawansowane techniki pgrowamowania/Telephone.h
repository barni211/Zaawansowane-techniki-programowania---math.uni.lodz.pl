#pragma once
#include <string>

using namespace std;

class Telephone
{
private:
	string name;
	int number;
public:
	Telephone();
	Telephone(string name, int number);
	~Telephone();
};

