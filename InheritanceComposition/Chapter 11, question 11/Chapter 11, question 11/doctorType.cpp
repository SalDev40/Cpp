#include "doctorType.h"
#include "personType.h"
#include <iostream>
#include <string>
using namespace std;



doctorType::doctorType(string first,string last,string special)
	: personType(first,last)
{
	specialty = special;
}

void doctorType::doctorSpecialty() {

	print();
	cout << specialty << endl;

}
