
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <string>
#include "swimmingPool.h"
using namespace std;

int main() {

	//Class object swimming	
	swimmingPool swimming; //class object with default constructor

	double size;
	double totalsize;
	double gallonsneeded;
	
	totalsize = swimming.poolsize(size); // going to change value of variable size, and store it in variable totalsize
	
	gallonsneeded = swimming.waterneeded(totalsize); // going to pass value of totalsize to function member waterneeded 
															//store return value of waterneeded() in variable gallonsneeded

	swimming.timefill(gallonsneeded);// going to pass value of gallonsneeded to function member timefill
	swimming.timedrain(gallonsneeded); // going to pass value of gallonsneeded to function member timedrain
	
	cout << "=================================================" << endl;

	//Class object partialfill

	swimmingPool partialfill(90.5); // parameterized constructor holding value of how much of the pool is empty


	int partialsize;
	int partialgallonsneeded;

	partialsize = partialfill.partialpoolsize();
	partialgallonsneeded = partialfill.waterneeded(partialsize);
	partialfill.timefill(partialgallonsneeded);
	partialfill.timedrain(partialgallonsneeded);









	system("pause");
	return 0;
}