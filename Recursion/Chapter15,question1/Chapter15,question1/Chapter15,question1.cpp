
#include <iostream>
#include <string>
#include <vector>
using namespace std;


void stars(int number) {

	if (number == 1) { // base case
		cout << "*" << endl;
		cout << "*" << endl;

	}
	else { //recursive case
		
		for (int i = 0; i < number; i++) {
			cout << "*";
		}
		cout << endl;

		stars(number - 1);

		for (int i = 0; i < number; i++) {
			cout << "*";
		}
		cout << endl;
	}

}

int main() {

	int number;
	do {
		cout << "Enter a number: " << flush;
		cin >> number;
		if (number < 0)
			cout << "Enter a positive number" << endl;

	} while (number < 0);

	cout << endl;

	stars(number);



	system("pause");
	return 0;
}