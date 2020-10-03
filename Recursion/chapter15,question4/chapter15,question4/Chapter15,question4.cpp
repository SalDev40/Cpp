
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//4. Write a recursive function named sumSquares that returns the sum of the
//squares of the numbers from 0 to num, in which num is a nonnegative int
//variable.Do not use global variables; use the appropriate parameters.Also
//write a program to test your function.

int sumSquares(int num) {

	if (num == 0) { // base case
		return 0;
	}
	else { //recursive case

		return pow(num,2) + sumSquares(num - 1);
	}

}


int main() {

	int number;
	do {
		cout << "Enter a number: " << flush;
		cin >> number;
		if (number < 0) {
			cout << "Enter a positive number" << endl;
		}
	} while (number < 0);


	cout << sumSquares(number) << endl;



	system("pause");
	return 0;
}