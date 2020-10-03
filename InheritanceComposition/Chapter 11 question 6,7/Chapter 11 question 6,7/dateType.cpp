#include "dateType.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;



dateType::dateType(int month, int day, double year)
{
	setdate(month, day, year); // pass arguments from constructor call parameter to function setdate()
}
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
int dateType::daysinmonth() {
	
	switch (dMonth) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;
		case 2:
			if (leapyear() == 1) {
				return 29;
				break;
			}
			else {
				return 28;
				break;
			}
	}

}
int dateType::leapyear()  {

	// Divides year (double) by a set number and sees if its a whole number (int)

	bool leapyear = 1; //flag changed if year not leapyear

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
int dateType::daysremaining() {
	
	int dayremaining;
	int total = 0;//accumulator
	int daysinmonths[]={ 31, 28, 31, 30,31,30, 31, 31, 30, 31, 30, 31 };

	for (int i = 0; i < (dMonth-1); i++) {
		total += daysinmonths[i];
	}

	if (leapyear() == 1) {
		dayremaining = 366 - (total + dDay);
	}
	else {
		dayremaining = 365 - (total + dDay);
	}

	return dayremaining;
}
void dateType::newDate() {
	
	int currentday, newdate, add;

	
	int daysinmonths[] = { 31, 28, 31, 30,31,30, 31, 31, 30, 31, 30, 31 };
	int leapdaysinmonths[] = { 31, 29, 31, 30,31,30, 31, 31, 30, 31, 30, 31 };

	int monthsinyear[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	int total = 0;

	if (leapyear() == 1) {
		for (int i = 0; i < (dMonth - 1); i++) { // add all days up to current month
			total += leapdaysinmonths[i];
		}

	}
	else {
		for (int i = 0; i < (dMonth - 1); i++) {
			total += daysinmonths[i];
		}
	}

	
	
	currentday = total + dDay; //current day = all days from previous month and days in current month

	cout << "How many days do you want to add to the current date: " << flush;
	cin >> add;
	newdate = currentday + add;

	while (newdate > 365 || newdate < 0) {

		cout << "New day of year must be less than 365 " << endl;
		cout << "How many days do you want to add to the current date: " << flush;
		cin >> add;
		newdate = currentday + add;
	}
	
	int total1 = 0;
	int newmonth;

	if (leapyear() == 1) {
		for (int i = 0; i < 12; i++) {

			total1 += leapdaysinmonths[i];

			if (newdate >= total1 && newdate <= (total1 + leapdaysinmonths[i + 1])) { //newdate is between accumulated months and next month
				newmonth = monthsinyear[i + 1];
				break;
			}
			else if (newdate <= 31) {
				newmonth = monthsinyear[0];
				break;
			}

		}
	}
	else {
		for (int i = 0; i < 12; i++) {

			total1 += daysinmonths[i];

			if (newdate >= total1 && newdate <= (total1 + daysinmonths[i + 1])) {
				newmonth = monthsinyear[i + 1];
				break;
			}
			else if (newdate <= 31) {
				newmonth = monthsinyear[0];
				break;
			}
		}
	}

	int newday;
	int total2 = 0; // accumulator

	if (leapyear() == 1) {
		for (int i = 0; i < (newmonth - 1); i++) {

			total2 += leapdaysinmonths[i]; //add up all the days of the months before new month of the newdate

		}
	}
	else {

		for (int i = 0; i < (newmonth - 1); i++) {

			total2 += daysinmonths[i];

		}

	}
	 newday = newdate - total2; // subtract total of new days from total of all accumulated months before it


	if (newday == 0) {
		newday = 1;
	}

	cout << "New date:" << newmonth << "-" << newday << "-" << dYear << endl;

}
	void dateType::printdate() {

	cout << dMonth << "-" << dDay << "-" << dYear << endl;
	cout << "Days in Month: " << daysinmonth() << endl;
	cout << "Days remaining in year: " << daysremaining() << endl;

	if (leapyear() == 1) {
		cout << "It is a leap year!" << endl;
	}
	else {
		cout << "It is NOT a leap year!" << endl;
	}


}
