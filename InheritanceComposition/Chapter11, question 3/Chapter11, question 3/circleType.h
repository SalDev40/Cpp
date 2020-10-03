#pragma once
#include <iostream>
#include <string>


class circleType
{
public:
	void setradius(double r);
	//Set the radius to "r" if radius > 0, else radius = 0
	double getradius();
	//Return radius value
	double area();
	//Calculate and return area
	double circumference();
	//Calculate and return circumference
	void print();
	//Output radius, area, and circumference
	circleType(double r = 0);
	//Default constructor

private:
	double radius;
};

