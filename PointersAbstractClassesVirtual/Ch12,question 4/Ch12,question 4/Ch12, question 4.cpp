
#include <iostream>
#include <string>
#include "largeIntegers.h"
#include <cstdlib>
#include <time.h>
using namespace std;


int main() {
	
	srand(time(0)); //genereate random number each debug
	largeIntegers *object; //Class pointer
	largeIntegers object1(rand() % 5000);
	largeIntegers object2(rand() % 5000);

	object = &object1; //setting pointer = to address of the class  object1

	//Passing objects as parameters

	object -> print(object1, object2); //using pointer object to access functions from class object1

	cout << "Adding = " << object -> add(object1, object2) << endl; // (->) = member access operator arrow
	cout << "Subtracting smallest from largest = " << object -> subtract(object1, object2) << endl;
	cout << "Multiplying = " << object -> multiply(object1, object2) << endl;
	object -> compare(object1, object2);











	system("pause");
	return 0;
}