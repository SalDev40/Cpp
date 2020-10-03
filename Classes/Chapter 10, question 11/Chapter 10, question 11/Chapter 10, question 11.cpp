
#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include "memberType.h"

using namespace std;

int main() {

	int totalbought;
	double totalspent;
	
	memberType member; // class object with default constructor
	memberType defaultmember( "sosa", "one", 34, 67.99); //class object using constructor with parameters 												   
															   //Passing arguments to constructor



	// Object defaultmember
	//Object decides what class object is to be used

	defaultmember.personname();
	defaultmember.personID();     

	int defaultbooks = 99;
	cout << "Amount of books bought: " << defaultbooks << endl; // passing default books to functino booksbought() of object defaultmember


	totalbought = defaultmember.booksbought(defaultbooks); //setting function equal to variable
	totalspent = defaultmember.amountspent(totalbought);

	cout << "Total amount spent? " << fixed << setprecision(2) << totalspent << endl; // show return value of function amount.spent()

	cout << "-----------------------------------------" << endl;

	// Object member
	// Will allow input

	member.personname();
	member.personID();
	
	int bought;
	cout << "Amount of books bought? " << flush;
	cin >> bought; // passing this input to function  booksbought();

	totalbought = member.booksbought(bought); //setting function equal to variable
	totalspent = member.amountspent(totalbought);

	cout << "Total amount spent? " << fixed << setprecision(2) << totalspent << endl; // show return value of function amount.spent()

	cout << endl;
	
	system("pause");
	return 0;

}