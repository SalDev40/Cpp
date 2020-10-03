#include "dateType.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


void dateType::setdate(int month, int day, int year) {


	//conditions for setting month
	while (month > 12 || month == 0) {
		cout << "Enter month (1-12): " << flush;
		cin >> month;
	}

	dMonth = month;

	//conditions for setting year
	while (year > 9999 || year == 0 || year < 1000) {
		cout << "Enter year (1000-9999): " << flush;
		cin >> year;
	}

	dYear = year;
	//conditions for setting day
	switch (dMonth) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			while (day > 31 || day == 0) {
				cout << "Enter day (1-31): " << flush;
				cin >> day;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			while (day > 30 || day == 0) {
				cout << "Enter day (1-30): " << flush;
				cin >> day;
			}
			break;
		case 2:
			if (leapyear() == 1) {
				while (day > 29 || day == 0) {
					cout << "Enter day (1-29): " << flush;
					cin >> day;
				}
				break;
			}
			else if (leapyear() != 1) {
				while (day > 28 || day == 0) {
					cout << "Enter day (1-28): " << flush;
					cin >> day;
				}

				break;
			}
	}

	dDay = day;
}
int dateType::getday() const {
	return dDay;
}
int dateType::getmonth() const {
	return dMonth;
}
int dateType::getyear() const {
	return dYear;
}
void dateType::printdate() {

	cout << dMonth << "-" << dDay << "-" << dYear << endl;

	if (leapyear() == 1) {
		cout << "It is a leap year! " << endl;
	}
	else if (leapyear() != 1) {
		cout << "It is NOT a leap year! " << endl;

	}
}
int dateType::leapyear() {

	// Divides year (double) by a set number and sees if its a whole number (int)
	bool leapyear = 1; //flag
	if (dYear / 4 == int(dYear / 4)) {

		if (dYear / 100 != int(dYear / 100)) {
			leapyear = 1;
		}
		if (dYear / 100 == int(dYear / 100)) {
			if (dYear / 400 == int(dYear / 400)) {
			leapyear = 1;
			}
		}

	}
	else {
		leapyear = 0;
	}
	return leapyear;
}
dateType::dateType(int month, int day, double year)
{
	setdate(month, day, year); // pass arguments from constructor call parameter to function setdate()
}
