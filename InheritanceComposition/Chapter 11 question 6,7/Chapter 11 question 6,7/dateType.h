#pragma once
#include <iostream>
#include <string>
using namespace std;

class dateType
{
public:

	void setdate(int month, int day, int year);
	//Set dMonth = month, dDay = day, dYear = year
	//Redefine instance variables if conditions not met
	int getday() const;
	//Return Day
	int getmonth() const;
	//Return Month
	int getyear() const;
	//Return Year
	int daysinmonth();
	//Return number of days in month
	void printdate();
	//Print Month, day and year  
	int leapyear();
	//Calculate and return if year is a leap year
	int daysremaining();
	//Calculate and return number of days in year
	void newDate();
	//Calculate the newdate after a number is added to current day
	dateType(int month, int day, double year);
	//Constructor with parameters, defined in setdate() function

private:

	int dMonth;
	int dDay;
	double dYear;



};

