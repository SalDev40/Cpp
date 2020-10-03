#include "dayType.h"
#include <iostream>
#include <string>
using namespace std;

// open each function to find its use and read  its hashed "//"
// out notes

void dayType::set(string day) // sets instance variable days to one of the following
{

	if (day == "sunday" || day == "Sunday") {
		days = "sun";
	}
	else if (day == "Monday" || day == "monday") {
		days = "mon";
	}
	else if (day == "tuesday" || day == "Tuesday") {
		days = "tue";
	}
	else if (day == "wednesday" || day == "Wednesday") {
		days = "wed";
	}
	else if (day == "thursday" || day == "Thursday") {
		days = "thur";
	}
	else if (day == "friday" || day == "Friday") {
		days = "fri";
	}
	else if (day == "saturday" || day == "Saturday") {
		days = "sat";
	}

}

void dayType::print(string today, int next, int previous, int calculate) // takes in today, value of next, and value of previous from program
{

	string calculatedday;
	int dayafteradding;
	cout << "Current Day: " << today << endl; // prints whatever value days was put to in functin set()

	next = nextday();
	switch (next) {
		case 1:
			cout << "Next Day: Monday" << endl;
			break;
		case 2:
			cout << "Next Day: Tuesday" << endl;
			break;
		case 3:
			cout << "Next Day: Wednesday" << endl;
			break;
		case 4:
			cout << "Next Day: Thursday" << endl;
			break;
		case 5:
			cout << "Next Day: Friday" << endl;
			break;
		case 6:
			cout << "Next Day: Saturday" << endl;
			break;
		case 7:
			cout << "Next Day: Sunday" << endl;
			break;
	}

	previous = previousday();
	switch (previous) {
		case 1:
			cout << "Previous Day: Monday" << endl;
			break;
		case 2:
			cout << "Previous Day: Tuesday" << endl;
			break;
		case 3:
			cout << "Previous Day: Wednesday" << endl;
			break;
		case 4:
			cout << "Previous Day: Thursday" << endl;
			break;
		case 5:
			cout << "Previous Day: Friday" << endl;
			break;
		case 6:
			cout << "Previous Day: Saturday" << endl;
			break;
		case 7:
			cout << "Previous Day: Sunday" << endl;
			break;
	}


	switch (calculate) { // Using return value of function calculateday()
		case 1: case 8: case 15: case 22: case 29:
			calculatedday = "Monday";
			break;
		case 2: case 9: case 16: case 23: case 30:
			calculatedday = "Tuesday";
			break;
		case 3: case 10: case 17: case 24: case 31:
			calculatedday = "Wednesday";
			break;
		case 4: case 11: case 18: case 25:
			calculatedday = "Thursday";
			break;
		case 5: case 12: case 19: case 26:
			calculatedday = "Friday";
			break;
		case 6: case 13: case 20: case 27:
			calculatedday = "Saturday";
			break;
		case 7: case 14: case 21: case 28:
			calculatedday = "Sunday";
			break;
	}

	cout << "Calculated day: " << calculatedday << endl;

}

int dayType::currentday() { // sets current day to a numeric value used in functions nextday() and previousday()

	if (days == "sun") { // uses instance variable days
		return 7;
	}
	else if (days == "mon") {
		return 1;
	}
	else if (days == "tue") {
		return 2;
	}
	else if (days == "wed") {
		return 3;
	}
	else if (days == "thur") {
		return 4;
	}
	else if (days == "fri") {
		return 5;
	}
	else if (days == "sat") {
		return 6;
	}
}

int dayType::nextday() {

	int total;
	int next;
	total = currentday(); // call function current day  and set its return value to total;

	next = total + 1;
	while (next > 7) {
		next = 1;
	}

	return next;
}

int dayType::previousday() {

	int total;
	int previous;
	total = currentday(); // call function current day  and set its return value to total;

	previous = total - 1;
	while (previous < 1) {
		previous = 7;
	}

	return previous;

}

int dayType::calculateday(int add) { //accepts inputted variable add from program

	int addedday;
	int calculate;
	calculate = currentday(); // setting return value from function currentday to variable calculate
	addedday = calculate + add; //adding number inputted in program to number returned from function currentday() 	

	if (addedday > 31) { // if addedday is greater then 31 it is set equal to sunday, 
		addedday = 7;
	}

	return addedday;
}

dayType::dayType(string d) // constructor
{

	set(d); // passing argument into function set()
}