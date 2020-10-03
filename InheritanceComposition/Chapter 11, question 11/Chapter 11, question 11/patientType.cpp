#include "patientType.h"
#include "personType.h"
#include "billType.h"
#include "doctorType.h"
//#include "dateType.h"
#include <iostream>
#include <string>
using namespace std;


patientType::patientType(string first, string last)
	: name(first,last) //Composition
{
}

patientType::patientType(string first,string last, string specialty)
	: doctorType(first,last,specialty) //Passing to constructor from class doctorType
{
}

patientType::patientType(int id,double hc,double pc,double df,double rc)
	: billType(id,hc,pc,df,rc) //Passing to constructor from class billType
{
}

//patientType::patientType(int m,int d , double y)
//	: bday(m,d,y)
//{
//}

void patientType::setname() {

	name.getFirstName(); //Composition
	name.getLastName();
	name.print();

}
//void patientType::setday() {
//
//	bday.getmonth();
//	bday.getday();
//	bday.getyear();
//
//}


