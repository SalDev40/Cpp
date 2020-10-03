

#include <iostream>
#include <string>
#include "fractionType.h"
using namespace std;

int main() {

	fractionType a(10);
	fractionType b(5);
	fractionType c(9);
	fractionType d(3);

	cout << (a / b) + (c / d) << endl;
	cout << ((a * d) + (b * c)) / (b * d) << endl;

	cout << (a / b) - (c / d) << endl;
	cout << ((a * d) - (b * c)) / (b * d) << endl;

	cout << (a / b) * (c / d) << endl;
	cout << (a * c) / (b * d) << endl;


	cout << (a / b) / (c / d) << endl;
	cout << (a * d) / (b * c) << endl;

	while ((c / d) == 0) {
		cout << "Enter a new value for d: " << flush;
		cin >> d;
		cout << "Enter a new value for c: " << flush;
		cin >> c;
	}

	if ((a / b) < (c / d)) {
		if (a*d < b*c) {
			cout << "True" << endl;
		}
		else {
			cout << "False" << endl;
		}

	}


	//fractionType x;
	//fractionType y;
	//fractionType z;
	//
	//cin >> x;
	//cout << "x:" << x << endl;
	//cin >> y;
	//cout << "y:" << x << endl;

	//cout << x + y << endl;

	//z = x + y;
	//cout << z << endl;




	system("pause");
	return 0;
}