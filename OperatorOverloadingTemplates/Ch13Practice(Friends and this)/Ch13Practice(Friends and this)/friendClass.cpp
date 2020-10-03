#include "friendClass.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


friendClass::friendClass()
{
	number = 7;
	h = 9;
	y = 8;
}

//Friend Function being passed the class object as a parameter
void showClassFunctions(friendClass friendObject) {
  cout << "show the value of the variable num: " << friendObject.number << endl;
  
  //friendObject has all access to all members of the class
}

int add(friendClass friendObject1, int s)
{

	return friendObject1.number + s;
}

//*this return function
friendClass friendClass::testthis()
{
	cout << this << endl; //this = addres of the currrent object calling function testhis()
	number = 2 * number;
	
	return *this; //Return value stored in  this(object address)
}

void friendClass::print() {

	cout << number << endl;
	cout << h << y;


}
