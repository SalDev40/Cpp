#include "largeIntegers.h"
#include <iostream>
#include <string>
using namespace std;


// a = object 1, p = object2

int largeIntegers::add(largeIntegers a, largeIntegers p)
{
	
	return a.number + p.number;
}

int largeIntegers::subtract(largeIntegers a, largeIntegers p)
{
	if (a.number > p.number) {
		return a.number - p.number;
	}
	else {
		return p.number - a.number;
	}
}

int largeIntegers::multiply(largeIntegers a, largeIntegers p){

	return a.number * p.number;
}

void largeIntegers::compare(largeIntegers a, largeIntegers p) {

	if (a.number == p.number) {
		cout << "Equal" << endl;
	}
	if (a.number > p.number) {
		cout << "Object 1 is greater" << endl;
	}
	if (a.number < p.number) {
		cout << "Object 2 is greater" << endl;
	}
}

void largeIntegers::store(int num) {

	number = num;
}

void largeIntegers::print(largeIntegers a, largeIntegers p) {
	cout << "Object 1: " << a.number << endl;
	cout << "Object 2: " << p.number << endl;
}


largeIntegers::largeIntegers(long int num)
{
	store(num);
}
