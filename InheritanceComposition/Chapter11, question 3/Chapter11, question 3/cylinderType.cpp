#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include "circleType.h"
#include "cylinderType.h"
using namespace std;


// Open each function/constructor for notes and definition

cylinderType::cylinderType(double r, double h, double c) // cylinderType(double r) = circleType(r)
														//Makes value of cylinderType(double r) = radius from baseclass, which is used
														// in calcualtions for certain functions such as area(), and getradius()
	: circleType(r) // baseclass constructor
{
	height = h; //defining instance variable of this class.
	center = c;
}

double cylinderType::volume() {

	return area() * height; // calling function area from baseclass
// Using values from class cylinderType constructor and plugging them in baseclass functions area()

}

double cylinderType::surfacearea() {
	
	return (2 * area()) + (2 * 3.1416 * getradius() * height); 
// calling function area and getradius from baseclass
// Using values from class cylinderType constructor and plugging them in baseclass functions area() and getradius()

}

void cylinderType::setheight( double h) {

	if (h >= 0) {
		height = h;
	}
	else {
		height = 0;
	}

}

void cylinderType::setradius(double x) {
	circleType::setradius(x); // passing parameter / calling function setradius() of baseclass
}

void cylinderType::setcenter(double c) {

	if (c >= 0) {
		center = c;
	}
	else {
		center = 0;
	}

}

void cylinderType::print() {

	circleType::print(); // Print area, radius, and circumference //Overriding baseclass

	cout << "Surface area: " << surfacearea() << endl;
	cout << "Volume: " << volume() << endl;

}