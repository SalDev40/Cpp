
#include <iostream>
#include <string>
using namespace std;


int main() {


	int feet;
	int inches;
	int cm;

	do {
		try {
			cout << "Enter your a length in feet and inches: " << endl;
			cout << "Feet: " << flush;
			cin >> feet;
			cout << "Inches: " << flush;
			cin >> inches;
			cm = ((feet * 12) + inches) * 2.54;

			if (feet < 0 || inches < 0 || !cin ) {
				throw 99;
			}
			else {
				cout << "Total in centimeters: " << cm << endl;
			}
		}

		catch (...) {
			cout << "Error: Try again" << endl;

		}
		

	} while (feet < 0  || inches < 0 || !cin);



	system("pause");
	return 0;
}