
#include <iostream>
#include <string>
#include <stdlib.h>
#include "circleType.h"
#include "cylinderType.h"
#include <cmath>
using namespace std;

int main() {

	cylinderType cylinder(9,9,7); // radius - will be defined in baseclass constructor //height//center
	cylinder.print();


	system("pause");
	return 0;
}