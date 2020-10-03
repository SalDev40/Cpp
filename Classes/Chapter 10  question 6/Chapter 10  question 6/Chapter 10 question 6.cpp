#include <stdlib.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "dayType.h"

using namespace std;

int main() {

	
	string today;
	int current;
	int next, add, calculate;
	int previous;

	dayType week(""); //class object 

	today = "Monday";
	do {
		cout << "How many days do you want to add (0-30) ? " << flush;
		cin >> add;

	} while (add > 30 || add < 0);

	week.set(today);
	
	current = week.currentday();
	previous = week.previousday();
	next = week.nextday();

	calculate = week.calculateday(add); // setting value returned by function calculate day to calculate
											// so it can be used in function print;


	week.print(today, next,previous, calculate); // pass values of current, next and previous day to function print()

	

	system("pause");
	return 0;


}