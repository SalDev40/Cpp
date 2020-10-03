
#include <iostream>
#include <string>
#include <cmath>
#include "dateType.h"
#include "extDateType.h"

using namespace std;


int main() {

	//Base class

	dateType date(01,30,2000); // Base class object with it's own base class constructor
	date.printdate();
	date.newDate();

	cout << "---------------------" << endl;

	//Derived class 
	extDateType deriveddate(4,30,2007); //Class object of derived class with its derived constructor
	
	deriveddate.printdate(); // calling public function from baseclass but using derived object
								//therefore values from derived class constructors will be used!
	deriveddate.monthword();




	system("pause");
	return 0;
}