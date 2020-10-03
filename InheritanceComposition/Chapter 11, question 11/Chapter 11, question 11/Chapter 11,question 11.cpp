
#include <iostream>
#include <string>
#include "personType.h"
#include "doctorType.h"
#include "billType.h"
#include "patientType.h"
//#include "dateType.h"

using namespace std;


int main() {

	patientType patientname("John", "Jacob");
	patientname.setname(); //calling function from class personTypee

	patientType patientbill(1500, 45.99, 65.00, 99.99, 245.99);
	patientbill.patientID(); //calling functions from class billType
	patientbill.patientscharges();
	
	patientType patientdoctor("sal", "hoo", "surgeon");
	patientdoctor.doctorSpecialty(); //Callling function from class doctorType



	//patientType patientbday(12, 24, 2000);
	//patientType admitdate(2, 23, 2015);
	//patientType leavingdate(2, 30, 2015);

	//patientbday.setday();
	//admitdate.setday();
	//leavingdate.setday();






	system("pause");
	return 0;
}