

#include<iostream>
using namespace std;
#include "StackBasedArray.h"

void print(StackBasedArray print) {

	while (!print.isEmpty()) {
		cout << print.top() << " "; //Print top element first and go down until list is empty // Last in first out				
		print.pop();
	}
}

int main() {
	
	const int maxSize = 5;
	StackBasedArray test(maxSize); // maxsize of 5

	test.initializeStack(); //set stackTop to 0;
	
	for (int i = 0; i < maxSize; i++)
	{
		test.push(i);
	}
	

	cout << "STACK OUTPUT" << endl;
	print(test);
	

	cout << "\nTESTING COPY" << endl;
	StackBasedArray testcopy(test); // initialize with object test
	print(testcopy);

	cout << "\nTESTING ASSIGNMENT" << endl;
	StackBasedArray testassignment;
	testassignment = testcopy; //setting object testassignment = to what's in object test copy
	print(testassignment);

	cout << endl;


	system("pause");
	return 0;
}