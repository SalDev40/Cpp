
#include <iostream>
#include <string>
#include "linkedListType.h"
#include "unorderedLinkedList.h"

using namespace std;

//
//4. (Printing a single linked list backward) Include the functions
//reversePrint and recursiveReversePrint, as discussed in this chapter,
//in the class linkedListType.Also, write a program function to print a
//(single) linked list backward. (Use either the class unorderedLinkedList or
//	the class orderedLinkedList to test your function.)


int main() {

	//test random values
	unorderedLinkedList object2;
	object2.insertFirst(1);
	object2.print();
	object2.insertRandom(1,2);
	object2.print();
	object2.insertRandom(2,3);
	object2.print();
	object2.insertRandom(3,1);
	object2.print();
	object2.insertRandom(4,3);
	object2.print();
	object2.insertRandom(5,3);
	object2.print();
	object2.insertRandom(6,5);
	object2.print();


	//print in reverse
	object2.reversePrint();
	object2.reversePrintusingArray();
	cout << "Reverse Print using Recursion" << endl;
	object2.reverseRecursivePrint(object2.head);
	
	cout << endl;




	system("pause");
	return 0;
}