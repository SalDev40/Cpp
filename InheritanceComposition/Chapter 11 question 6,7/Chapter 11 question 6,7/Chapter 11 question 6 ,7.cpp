#include <iostream>
#include <string>
#include <cmath>
#include "dateType.h"

using namespace std;


int main() {

	dateType date(2, 8 , 1997);

	date.printdate();

	date.newDate();


	system("pause");
	return 0;
}