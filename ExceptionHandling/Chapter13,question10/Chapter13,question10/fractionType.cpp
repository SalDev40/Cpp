#include "fractionType.h"
#include <iostream>
#include <string>
using namespace std;


fractionType::fractionType(int n)
{
	number = n;
}
fractionType::fractionType()
{
}


ostream& operator<<(ostream& osObject, const fractionType& fraction) {
	osObject << fraction.number << "/" << fraction.number;
	return osObject;
}
istream& operator>>(istream& isObject, fractionType& fraction) {
	isObject >> fraction.number;
	return isObject;
}

fractionType fractionType::operator+(const fractionType& fraction) const {
	fractionType temporary;
	temporary.number = number + fraction.number;
	return temporary;
}
fractionType fractionType::operator-(const fractionType& fraction) const {
	fractionType temporary;
	temporary.number = number - fraction.number;
	return temporary;
}
fractionType fractionType::operator/(const fractionType& fraction) const {
	fractionType temporary;
	temporary.number = number / fraction.number;
	return temporary;
}
fractionType fractionType::operator*(const fractionType& fraction) const {
	fractionType temporary;
	temporary.number = number * fraction.number;
	return temporary;
}
bool fractionType::operator==(const fractionType& fraction) const {
	return(number == fraction.number);
}
bool fractionType::operator<(const fractionType& fraction) const {
	return(number < fraction.number);
}