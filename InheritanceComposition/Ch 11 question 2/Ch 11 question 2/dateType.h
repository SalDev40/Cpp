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
	//Return dDay
	int getmonth() const;
	//Retrun dMonth
	int getyear() const;
	//return dYear
	void printdate();
	//print Month, day and year  
	int leapyear();
	//Calculate if year is a leap year
	dateType(int month, int day, double year);
	//Constructor with parameters, defined in setdate() function

private:

	int dMonth;
	int dDay;
	double dYear;



};

