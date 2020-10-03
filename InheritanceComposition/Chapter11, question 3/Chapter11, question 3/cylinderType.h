#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include "circleType.h"

class cylinderType: public circleType
{

public:

	cylinderType(double r,double h, double c);
	//double r will be defined from baseclass constructor
			// r == radius after being defined from baseclass constructor
	//h = height, c = center
	double volume();
	//Calculate and return volume
	double surfacearea();
	//Calculate and return surface area
	void setheight(double h);
	//Set height
	void setradius(double r); 
	//Overriding from base class
	//Set radius
	void setcenter(double c);
	//Set center
	void print();
	//Overriding from baseclass
	//Output Center, surface area, and height, along with function print() from baseclass
	
private: 
	
	double height;
	double center;

};

