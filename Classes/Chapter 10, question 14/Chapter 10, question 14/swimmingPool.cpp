#include "swimmingPool.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;



swimmingPool::swimmingPool()  // default constructor
{
	length = 10; // in feet
	width = 12; // in feet
	depth = 6; // in feet
	ratefilling = 15; // in gallons per minutes // how fast pool fills
	ratedraining = 20; // in gallons per minute // how fast pool drains
	cubicfootpergallon = 0.134; // to convert cubic feet to gallons 
}

swimmingPool::swimmingPool(double partial) { // parametrized constructor

	length = 10; // in feet
	width = 12; // in feet
	depth = 6; // in feet
	ratefilling = 15; // in gallons per minutes // how fast pool fills
	ratedraining = 20; // in gallons per minute // how fast pool drains
	cubicfootpergallon = 0.134; // to convert cubic feet to gallons 
	empty = (length*width*depth) - partial;
	partialempty = partial;
}



double swimmingPool::waterneeded(const double & size)
{
	gallons = size / cubicfootpergallon; // formula for finding amount of gallons needed
	cout << "Water (gallons) needed to fill pool: " << gallons << endl;
	 
	return gallons; // return value of gallons
}
 
void swimmingPool::timefill(const double& gal) { //receieve value of gallonsneeded or partialgallonsneeded depending on object

	cout << "Time needed to fill pool (minutes) : " << gal/ratefilling << endl;
}

void swimmingPool::timedrain(const double& gal) { //receieve value of gallonsneeded or partialgallonsneeded depending on object

	cout << "Time needed to drain pool (minutes): " << (gal/ratedraining) << endl;
}

double swimmingPool::poolsize(double & size) {
	
	size = length * width * depth;
	cout << "Pool Size (cubic feet): " << size << endl;
	return size;
}

double swimmingPool::partialpoolsize() {

	cout << "How much of the pool is empty (feet) ? " << partialempty << endl;
	cout << "Pool Size (cubic feet): " << empty << endl;
	return empty;
}


