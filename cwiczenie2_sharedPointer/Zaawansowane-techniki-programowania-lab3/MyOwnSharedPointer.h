#pragma once
#include <iostream>

static class MyOwnSharedPointer
{
	int *value;
	mutable int *counter;
public:
	MyOwnSharedPointer()
	{
		this->counter = new int(1);
	}

	MyOwnSharedPointer(int value)
	{
		this->value = new int(value);
		this->counter = new int(1);
	}

	MyOwnSharedPointer(const MyOwnSharedPointer &a)
	{
		*a.counter++;
		value = a.value;
	}

	MyOwnSharedPointer(MyOwnSharedPointer &&a)
	{
		//*counter++;
		this->value = a.value;
		this->counter = a.counter;
		//*a.counter = *a.counter - 1;
		a.counter = nullptr;
		a.value = nullptr;
	}

	MyOwnSharedPointer & operator=(const MyOwnSharedPointer &a)
	{
		this->value = a.value;
		*counter = *counter + 1;
		*a.counter = *counter - 1;
		if (*a.counter == 0)
		{
			delete a.counter;
			delete a.value;
		}
		return *this;
	}

	MyOwnSharedPointer & operator=(MyOwnSharedPointer && a)
	{
		*counter = *counter + 1;
		*this->value = *a.value;
		/**a.counter = *a.counter - 1;
		if (*a.counter == 0)
		{
			delete a.counter;
			delete a.value;
		}*/
		a.counter = nullptr;
		a.value = nullptr;
		return *this;	
	}


	void printAddress()
	{
		std::cout << this->value;
	}

	void printNumberReferences()
	{
		std::cout << *this->counter;
	}


	~MyOwnSharedPointer()
	{
		
		if (counter == 0)
		{
			delete value;
		}
	};

};

