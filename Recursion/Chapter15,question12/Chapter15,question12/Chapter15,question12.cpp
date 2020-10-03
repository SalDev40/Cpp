

#include <iostream>
using namespace std;


int gcd(int x, int y) {

	if (y == 0) { //base case
		return x;

	}
	else { //recursive case

		return gcd(y, x % y  );
	}


}
int main() {

	cout << gcd(20,10) << endl;
	system("pause");
	return 0;
}