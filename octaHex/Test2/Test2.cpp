#include <iostream>

using namespace std;


void NumToOcta(int num, int base) {

	//base case
	if (num == 0) {
		return;
	}
	else {
		//recursive call
		NumToOcta(num / base, base);
		cout << num % base;
	}

}

void NumToHEXA(int num, int base) {

	//base case
	if (num == 0) {
		return;
	}
	else {
		//recursive call
		NumToOcta(num / base, base);

		//output base on remainder of num/base
		switch (num % base) {
		case 10:
			cout << "A";
			break;
		case 11:
			cout << "B";
			break;
		case 12:
			cout << "C";
			break;
		case 13:
			cout << "D";
			break;
		case 14:
			cout << "E";
			break;
		case 15:
			cout << "F";
			break;
		case 16:
			cout << "G";
			break;
		default:
			cout << num % base;
			break;
		}


	}

}

int main() {

	int num;
	cout << "ENTER A NUMBER: ";
	cin >> num;
	//Octa 
	NumToOcta(num, 8);
	cout << "  --> OCTA" << endl;
	//Hexa
	NumToHEXA(num, 16);
	cout << "  --> HEXA" << endl;

	system("pause");
	return 0;

}