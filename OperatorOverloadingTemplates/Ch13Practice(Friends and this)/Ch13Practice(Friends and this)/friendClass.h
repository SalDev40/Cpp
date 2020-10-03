#pragma once
class friendClass
{
public:

	friend void showClassFunctions(friendClass friendObject);
	//friend function // Must have friend before class name

	friend int add(friendClass friendObject1, int);
	//friend function add // Must have friend before class name

	friendClass testthis();
	//return *this //returnType is of the class

	void print();
	//display value of function testthis();

	friendClass();

private:

	int number; // friend function has access to this private variable
	int h;
	int y;
};

