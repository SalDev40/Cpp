#pragma once
#include <iostream>
#include <string>
using namespace std;

class largeIntegers
{
public:

	void store(int);
	//Store and set values of parameter = to instance variable number
	int add(largeIntegers a, largeIntegers p);
	//Return added value of objects in formal parameter
	int subtract(largeIntegers,largeIntegers);
	//Return subtracted value of objects in formal parameter
	int multiply(largeIntegers a, largeIntegers p);
	//Return multiplies value of objects in formal parameter
	void compare(largeIntegers a, largeIntegers p);
	//Return comparison  of objects in formal parameter
	void print(largeIntegers a, largeIntegers p);
	//print added value of objects in formal parameter
	largeIntegers(long int);
	

private:

	int number;




};

