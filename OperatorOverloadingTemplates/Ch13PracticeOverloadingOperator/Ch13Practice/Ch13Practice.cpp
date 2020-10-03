
#include <iostream>
#include <iomanip>
#include <string>
#include "_13Practice.h"

using namespace std;

int main() {
	

	_13Practice Object1(10);
	_13Practice Object2(15);
	_13Practice additionObject;
	_13Practice subtractionObject;
	_13Practice multiplicationObject;
	_13Practice divisionObject; // Used for friend operator function
	

	cout << "Object 1:  " << Object1 << endl;
	cout << "Object 2:  "<< Object2 << endl;
	
	additionObject = Object1 + Object2; //additionObject = return object from operator function definition
	subtractionObject = Object2 - Object1; //subtractionObject = return object from operator function definition

	//Object1 + Object2, decides which value is the instance variable num, and which is the value of object3.num in function
	//   operation definition. This order makes Object1 = num and Object2 = object3.num since the formula is (tempObject = num + object3.num). 
	//Even if you switch order to (tempObject = object3.num + num), num will still equal first value of equation (Object1)
	//Object2 + Object1 would make Object2 = num and Object1 = object3.num


	multiplicationObject = Object2 * Object1; //multipilicationObject = return int from operator function definition

	// (<<) and (>>) operator overload allows us to (cout << Object) and (cin >> Object)

	cout << "Adding: " << additionObject << endl; //Display value of Object1 + Object2
	cout << "Subtracting: " << subtractionObject << endl; //Display value of Object2 - Object 1
	cout << "Multiplying: " << multiplicationObject << endl; //Display value of Object1 * Object 1


	///////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////NON-MEMBER(FRIEND FUNCTIONS)/
	/////////////////////////////////////////////////////////////////////
	
	// (<<) and (>>) operator overload allows us to (<< cout Object) and (cin >> Object)


	divisionObject = Object2 / Object1; // Nonmember Function Operator Overloader
	
	cout << "Division: " << divisionObject << endl; //division operator overload

	if (Object2 == Object1) { // equal to operator overload
		cout << "Objects are equal" << endl;
	}
	else
	{
		cout << "Objects aren't equal" << endl;
	}
	

	cout << "Post Increment Object1++: " << Object1++ << endl;
	cout << "Post Increment Object2--: " << Object2-- << endl;
	cout << "Pre Increment --Object1: " << --Object1 << endl;
	cout << "Pre Increment ++Object2: " << ++Object2 << endl;


	 system("pause");
	 return 0;

}