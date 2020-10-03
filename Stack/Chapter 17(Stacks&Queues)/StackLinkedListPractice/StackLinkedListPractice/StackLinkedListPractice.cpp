

#include <iostream>
#include <string>
#include "StackLinkedList.h"
#include <iomanip>
using namespace std;


int main() {


	StackLinkedList stack;
	stack.initializeStack();
	stack.push(5);
	stack.push(4);
	stack.push(3);
	stack.push(2);
	stack.push(1);
	stack.print();
	cout << endl;

	cout << fixed << setw(50) << "TEST COPY STACK: " << endl;

	StackLinkedList testcopy(stack);

	testcopy.print();
	cout << "AFTER popping last 2: " << endl;
	testcopy.pop();
	testcopy.pop();
	testcopy.print();
	cout << "AFTER adding 2 elements: " << endl;
	testcopy.push(7);
	testcopy.push(6);
	testcopy.print();



	cout << endl;

	cout << fixed << setw(50) << "TEST ASSIGNMENT STACK: " << endl;
	StackLinkedList testassignment;
	testassignment = testcopy;
	testassignment.print();
	cout << "AFTER popping last 4: " << endl;
	testassignment.pop();
	testassignment.pop();
	testassignment.pop();
	testassignment.pop();
	testassignment.print();
	cout << "AFTER adding 2 elements: " << endl;
	testassignment.push(4);
	testassignment.push(5);
	testassignment.print();

	cout << endl;





	system("pause");
	return 0;
}