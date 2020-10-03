#include "_13Practice.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Member operator overloading Functions

_13Practice _13Practice::operator+(const _13Practice& object3) const {

	_13Practice tempObject; // creating an object to return the value of added objects from program
	tempObject.num = num + object3.num; // num = value passed from object1  //object3.num = value passed from object2
																					//Check equation in program

	return tempObject; //returning object tempObject
}

_13Practice _13Practice::operator-(const _13Practice& object3) const {

	_13Practice tempObject; // creating an object to return the value of added objects from program
	tempObject.num = num - object3.num; // num = value passed from object2  //object3.num = value passed from object1 
																				//Check equation in program

	return tempObject; //returning object tempObject
}

int _13Practice::operator*(const _13Practice& object3) const {

	_13Practice tempObject; // creating an object to return the value of added objects from program
	tempObject.num = num  * object3.num; // num = value passed from object1  //object3.num = value passed from object2
																				//Check equation in program

	return tempObject.num; //returning int tempObject.num
}

//Pre-Increment
_13Practice _13Practice::operator--() {
	
	--num; //Increment value of object
	return *this;
}

//Post-Increment
_13Practice _13Practice::operator++(int u) {

	_13Practice temp = *this; //Used to copy value of object
	++temp; // Incremement the Object
	return temp;
}


//Non-Member operator overloading Functions

 _13Practice operator/(const _13Practice& object3, const _13Practice& object4){

	_13Practice tempObject; // creating an object to return the value of divided objects from program
	tempObject.num = object3.num / object4.num; 

	return tempObject; //returning object tempObject
}

bool operator == (const _13Practice& object3, const _13Practice& object4) {

	 return (object3.num == object4.num); //returning object tempObject
 }

_13Practice operator++(_13Practice& object3) {

	(object3.num)++;
	return object3;
}

_13Practice operator--(_13Practice& object3,int u) {
	
	_13Practice temp = object3; //Copy object3 into object temp

	--temp; // Increment object temp
	return temp;
}

//Operator Overloading for << and >> (Non-Member Functions)

ostream& operator<<(ostream& osObject, const _13Practice& cobject) {

	osObject << cobject.num;
	return osObject;
}

istream& operator>>(istream& isObject, const _13Practice& cobject) {

	isObject >> cobject.num;
	return isObject;
}






 //Constructors

 _13Practice::_13Practice(int x)
 {
	 num = x;
 }

 _13Practice::_13Practice()
 {
 }

