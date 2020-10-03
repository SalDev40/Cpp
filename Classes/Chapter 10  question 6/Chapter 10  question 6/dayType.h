#pragma once
#include <iostream>
#include <string>
using namespace std;

class dayType
{
public:

	dayType(string d  = ""); //default constructor 
	//postcondition sets days = d;
	void set(string);
	// sets day 
	void print(string,int,int,int); 
	//prints day
	int currentday() ; 
	//return day
	int nextday() ;
	// return next day
	int previousday();
	// return previous day

	int calculateday(int);
	//return day that is calculated by adding a certain chosen number to current day


private:

	string days;
	
	
};

