#include "memberType.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

memberType::memberType() { // default constructor // instance variables defined in class object member
	firstname = "sosa";
}


memberType::memberType(string name1,string name2, int badge, double cost) //constructor with parameters
																		  // using values from parameters of class object defaultmember
								
{
	firstname = name1;
	lastname = name2;
	ID = badge; // setting instance variable = to argument in formal parameter
	price = cost;

}
void memberType::personname()
{	
	
	if (firstname != "sosa" && lastname != "sal") { // if firstname and lastname are not equal to object defaultmembers parameters
		cout << "First name: " <<flush;
		cin >> firstname; //setting instance variable in default constructor for class  object member 
		cout << "Lastname: " << flush;
		cin >> lastname; //setting instance variable in default constructor for  class object member
	}
	else { // using variables from object defaultmember's parameter
		cout << "First name: " << firstname << endl; //using instance variable from object defaultmember's parameter
		cout << "Lastname: " << lastname << endl;
	}


}
void memberType::personID()
{
	if (ID != 34) { //Used to be able to create input for class object member
		cout << "ID: " << flush;
		cin >> ID; // input = instance variable ID for class object member
	}
	else {
		cout << "ID: " << ID << endl; //ID is defined from parameters of object defaultmember
	}
}
int memberType::booksbought(int bought) // using argument passed from program
{
	char more;
	int extra;

	cout << "Do you need to return any books (Y/N)? " << flush;
	cin >> more;

	if (more == 'y' || more == 'Y') {

		do {
			cout << "How many? " << flush;
			cin >> extra;
			cout << "Total Bought = " << bought - extra << endl;
			if ((bought - extra) < 0) {
				cout << endl;
				cout << "Enter a value less than you bought" << endl;
				cout << endl;
			}

		} while ((bought - extra) < 0); // total of books cant be negative

		return bought - extra; //total after books were returned

	}

	return bought; // return the number that was passed as argument if no books were returned

}
double memberType::amountspent(int totalbought)
{
	if (price != 67.99) // if price is not == to price from object defaultmember's parameter 
							// Used to input for class object member
	{
		cout << "Book price: " << flush;
		cin >> price;  // to set instance variable in class object member
	}
	else {
		cout << "Book price: " << price << endl; // price == defaultmember objects parameter
	}

	return (totalbought * price); 

}

	