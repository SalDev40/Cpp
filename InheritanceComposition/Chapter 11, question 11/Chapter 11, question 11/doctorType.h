#pragma once
#include "personType.h"
#include <iostream>
#include <string>
using namespace std;

class doctorType : public personType
{
public:

	void doctorSpecialty();
	//Store a doctors specialty


	doctorType(string firstname = "", string lastname = "" , string specialty = "");
	

private: 

	string specialty;
};



