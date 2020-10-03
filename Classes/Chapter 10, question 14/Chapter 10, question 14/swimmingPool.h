#pragma once
#include <iostream>
#include <string>

using namespace std;

class swimmingPool
{
public:

	swimmingPool(); // default constructor 
	//Used in object swimming
	swimmingPool(double); //Parameterized constructor
	//Used in object partialfill
	double waterneeded(const double&); // can change value only in member function
	//Post:To return amout of gallons needed to fill pool
	void timefill(const double&);
	//Post:Find amount of time needed to fill pool
	void timedrain(const double&);
	//Post:Find amout of time needed to drain pool
	double poolsize(double &);
	//Post:return size of pool  for class object swimming
	double partialpoolsize(); 
	//Post:return size of pool for class object partialfill


private:

	double length;
	double width;
	double depth;
	double ratefilling;
	double ratedraining;
	double cubicfootpergallon;
	double gallons; // not defined in constructor, defined in function waterneeded()
	double empty; //Used in parametrized constructor only
	double partialempty; //used in paramterized constructor  only;


};

