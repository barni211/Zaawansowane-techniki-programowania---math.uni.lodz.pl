#pragma once
#include <stdlib.h>
#include <iostream>

using namespace std;


class MyClass
{
private:
	int id;
	int *t;
public:
	MyClass()
	{
		cout << "Kontruktor bezparametrowy \n";
		id = 555;
		t = new int(8);
	}

	MyClass(int *number)
	{
		//this->id = number;
		this->t = number;
		cout << "konstruktor z parametrem \n";
	}

	/*MyClass(const MyClass & a)
	{
		cout << "konstruktor z parametrem const";
	}*/

	/*MyClass &operator=(const MyClass& s)
	{
		cout << "Przeci¹¿ony operator przypisania wywo³any na obiekcie \n";
		this->t = s.t;
		return *this;
	}*/

	MyClass(MyClass &&a)
	{
		cout << "Konstruktor przenosz¹cy wywo³any na obiekcie \n" ;
		this->t = a.t;
		a.t = nullptr;
	}

	MyClass &operator=(MyClass&& a)
	{
		cout << "Przeci¹¿ony operator przypisania z przenoszeniem obiektu \n" ;
		return *this;
	}

	~MyClass()
	{
		cout << "Destruktor obiektu\n";
		
	
		//this->t = nullptr;
		if(t!=nullptr)
			delete t;
	}
};


