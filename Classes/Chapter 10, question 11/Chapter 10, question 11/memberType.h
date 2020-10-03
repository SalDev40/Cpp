#pragma once
#include <iostream>
#include <string>
using namespace std;


class memberType
{
public:

	memberType(); //default constructor
	void personname();
	void personID();
	int booksbought(int);
	double amountspent(int);
	memberType(string,string,int, double); //constructor with parameters
	
private:

	string firstname;
	string lastname;
	int ID;
	double price;

};

