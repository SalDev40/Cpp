#include "extDateType.h"
#include <iostream>
#include <string>
#include "datetype.h"
using namespace std;


extDateType::extDateType(int m, int d, int y) //derived constructor parameters
	:dateType(m, d, y) //pass arguments of m,d,y from derived constructors call 
					//to constructor of baseclass which is going to define them
{
	
}


void extDateType::monthword() {

	//Function getmonth() of base class is using parameters from derived class do to passing those values to 
	//the base class, (see definition of derived class's constructor)

	switch (getmonth()) { //using return value from function getmonth() from base class

		case 1:
			wordmonth = "January";
			break;
		case 2:
			wordmonth = "February";
			break;
		case 3:
			wordmonth = "March";
			break;
		case 4:
			wordmonth = "April";
			break;
		case 5:
			wordmonth = "May";
			break;
		case 6:
			wordmonth = "June";
			break;
		case 7:
			wordmonth = "July";
			break;
		case 8:
			wordmonth = "August";
			break;
		case 9:
			wordmonth = "September";
			break;
		case 10:
			wordmonth = "October";
			break;
		case 11:
			wordmonth = "November";
			break;
		case 12:
			wordmonth = "December";
			break;
	}

	cout << wordmonth << "-" << getday() << "-" << getyear() << endl; //using functions getyear() and getday() from base class

	

}