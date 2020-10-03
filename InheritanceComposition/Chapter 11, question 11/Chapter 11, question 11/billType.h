#pragma once
#include <iostream>
#include <string>
using namespace std;

class billType
{
public:
	
	void patientID();
	//Store a patients ID
	void patientscharges();
	//Store a patients hospital charges
	billType(int ID = 0,double hospitalcharges = 0, double pharmacycharges = 0,double doctorsfee = 0,double roomcharges = 0);
	//Default constructor

private:

	int ID;
	double hospitalcharges;
	double pharmacycharges;
	double doctorsfee;
	double roomcharges;
};

