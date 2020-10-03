#pragma once
#include <iostream>
#include <string>
using namespace std;

class fractionType
{
	friend ostream& operator<<(ostream& , const fractionType&);
	//Overload operator <<
	friend istream& operator>>(istream&, fractionType&);
	//Overload operator >>

public:

	
	fractionType operator+(const fractionType&) const;
	//Overload operator +
	fractionType operator-(const fractionType&) const;
	//Overload operator -
	fractionType operator/(const fractionType&) const;
	//Overload operator /
	fractionType operator*(const fractionType&) const;
	//Overload operator *

	bool operator==(const fractionType&) const;
	//Overload operator ==
	bool operator<(const fractionType&) const;
	//Overload operator <
	


	fractionType(int number);
	fractionType();


private:
	int number;
};

