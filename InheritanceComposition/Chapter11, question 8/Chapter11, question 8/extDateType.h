#pragma once
#include <iostream>
#include <string>
#include "datetype.h"
using namespace std;

class extDateType: public dateType
{
public:
		
	void monthword();
	//store the month as a word
	
	extDateType(int m, int d, int y);
	//derived constructor

private:

	string wordmonth;

};

