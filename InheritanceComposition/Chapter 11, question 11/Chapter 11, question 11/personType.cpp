#include "personType.h"
#include <iostream>
#include <string>
using namespace std;


personType::personType(string first,string last)
{
	setName(first, last);
}

void personType::print() const {

	cout << firstname << " " <<  lastname << endl;
}

void personType::setName(string first, string last) {
	firstname = first;
	lastname = last;
}

string personType::getFirstName() const {
	return firstname;
}
string personType::getLastName() const {
	return lastname;
}