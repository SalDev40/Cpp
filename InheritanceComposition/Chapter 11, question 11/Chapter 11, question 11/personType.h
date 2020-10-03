#pragma once
#include <iostream>
#include <string>
using namespace std;
class personType
{
public:

	void print() const;
	//Ouput firstname lastname
	void setName(string first, string last);
	//set firstname = first, set lastname = last
	string getFirstName() const;
	//Return value of firstname
	string getLastName() const;
	//Return value of lastname
	personType(string first = "", string last = "");
	//firstname =  first, lastname = first


private:

	string firstname;
	string lastname;

};

