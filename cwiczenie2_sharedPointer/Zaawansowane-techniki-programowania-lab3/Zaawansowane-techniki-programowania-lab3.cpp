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
		cout << "\nb ilosc referencji \n";
		b.printNumberReferences();
		cout << '\n';
		
		a= move(b);

		a.printAddress(); cout << "\t"; b.printAddress();
		cout << "\nb ilosc referencji \n";
		b.printNumberReferences();
		cout << '\n';

		MyOwnSharedPointer c(MyOwnSharedPointer(3));

		cout << "\nc ilosc referencji \n";
		c.printNumberReferences();
		cout << '\n';

		a = c;

		cout << "\nc ilosc referencji \n";
		c.printNumberReferences();
		cout << '\n';

		MyOwnSharedPointer d = move(c);

		cout << "\nc ilosc referencji \n";
		c.printNumberReferences();
		cout << '\n';

		cout << "\nd ilosc referencji \n";
		d.printNumberReferences();
		cout << '\n';

		MyOwnSharedPointer e(130);
		MyOwnSharedPointer f(13);

		d = e;
		d = move(f);

		cout << "\nd ilosc referencji \n";
		d.printNumberReferences();
		cout << '\n';

		cout << "\ne ilosc referencji \n";
		e.printNumberReferences();
		cout << '\n';

		cout << "\nf ilosc referencji \n";
		f.printNumberReferences();
		cout << '\n';

	}


	int acb;

	cin >> acb;
	
    return 0;
}

