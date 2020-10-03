#include "circleType.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;




void circleType::setradius(double r) {
	
	if (r >= 0) {
		radius = r;
	}
	else {
		radius = 0;
	}
}

double circleType::getradius() {

	return radius;
}

double circleType::area() {
	return 3.1416 * radius * radius;
}

double circleType::circumference() {

	return 2 * 3.1416 * radius;
}

void circleType::print() {

	cout << "Area: " << area() << endl;
	cout << "Radius: " << getradius() << endl;
	cout << "Circumference: " << circumference() << endl;

}

circleType::circleType(double r) // Going to be used from values of derived constructor also
{
	setradius(r); // Passes value of argument (r) to function setradius(), which defines argument (r)
}
