#pragma once
#include "personType.h"
#include "billType.h"
#include "doctorType.h"
//#include "dateType.h"
#include <iostream>
#include <string>
using namespace std;
class patientType : public billType, public doctorType
{
public:

	patientType(string, string);
	//Constructor for class personType used to display patient name
	patientType(int,double,double,double,double); 
	//Constructor for class bill, going to be used for ID
	patientType(string, string, string);
	//Constructor for class doctorType, going to be used physicians name, and specialty;
	//patientType(int, int, double);
	////Construct for class dateType used to set patients birthdate, admit date, and discharge date
	//void setday();
	void setname();
	//Set persons name
	

private:

	personType name;
	//dateType bday;
};

