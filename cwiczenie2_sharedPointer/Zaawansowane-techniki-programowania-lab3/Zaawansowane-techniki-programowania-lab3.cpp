// Zaawansowane-techniki-programowania-lab3.cpp : Defines the entry point for the console application.
//
#include <stdlib.h>
#include "stdafx.h"
#include "MyClass.h"
#include "MyOwnSharedPointer.h"
#include <memory>

using namespace std;

int main()
{
	
	{
		MyOwnSharedPointer a(5);
		MyOwnSharedPointer b(157);

		a.printAddress(); cout << "\t"; b.printAddress(); cout << "\n";
		b = a;
		a.printAddress(); cout << "\t"; b.printAddress();  cout << "\n";
		cout << "\n ilosc referencji \n";
		b.printNumberReferences();
		cout << '\n';
		
		a= move(b);
		a.printAddress(); cout << "\t"; b.printAddress();

		cout << "\n ilosc referencji \n";
		b.printNumberReferences();
		cout << '\n';

	}


	int ads;

	cin >> ads;
	
    return 0;
}

