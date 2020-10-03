
#include <iostream>
#include <string>
#include <iomanip>
#include "friendClass.h"
using namespace std;


int main() {
	
	int test;

	/////////////////////////////////////////FRIEND FUNCTION///////////
	//////////////////////////////////////////////////////////////////

	friendClass Object1; //Object of class friendClass
	showClassFunctions(Object1); //Passing Object1 as a parameter to friend function showclassFunctions();
	cout << add(Object1, 8) << endl; //Passing Object1 as a parameter to friend function add(), and adding integer 8;


	/////////////////////////////////////////RETURN *THIS ////////////
	/////////////////////////////////////////////////////////////////

	cout << &Object1 << endl; //Display address of the object



	Object1.testthis().print(); //Display function print() which has function testthis()
			//Functions can be chained because of *this


	system("pause");
	return 0;
}