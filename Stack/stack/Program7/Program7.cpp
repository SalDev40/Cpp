

//
//Two stacks of the same type are the same if they have the same number of
//elements and their elements at the corresponding positions are the same.
//Overload the relational operator == for the class stackType that returns
//true if two stacks of the same type are the same; it returns false otherwise.
//Also, write the definition of the function template to overload this operator.

#include <iostream>
#include "Stack.h"
using namespace std;

int main() {

	Stack object1;
	Stack object2;



	object1.push(5);
	object1.push(4);
	object1.push(3);
	object1.push(2);
	object1.push(1);



	object2 = object1;
	object2.push(4);
	object1.push(7);


	Stack object3(object2);
	object2.pop();
	object3.push(7);
	object3.print();
	object2.print();
	//object1.print();

	if (object3 == object2) {
		cout << "Objects are equal" << endl;
	}
	else {
		cout << "Objects NOT equal" << endl;
	}


	

	system("pause");
	return 0;
}