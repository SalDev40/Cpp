
#include <iostream>
#include <string>
#include <iomanip>
#include"LinkedList.h"
using namespace std;

int main() {

	LinkedList sal;

	//Creating elements of list
	sal.createList(1);
	sal.createList(2);
	sal.createList(3);
	sal.createList(4);
	sal.createList(5);
	sal.print(sal);

	//insert node in beginning
	sal.insertbeginning(9);
	sal.print(sal);

	//insert node in end
	sal.insertlast(6);
	sal.print(sal);
	sal.insertlast(7);
	sal.print(sal);

	//deletenode in position
	sal.deletenode(1);
	sal.print(sal);
	sal.deletenode(7);
	sal.print(sal);

	//insert number at nth position
	sal.insert(9, 4);
	sal.print(sal);
	sal.insert(0, 7);
	sal.print(sal);

	
	cout << fixed << setw(43) << "TESTING COPY LIST:DATA FROM OBJECT SAL" << endl;
	cout << endl;

	//creating copy list
	LinkedList copy(sal); //initializing with sal object
	copy.print(copy);

	//deletenode in position n for copy object
	copy.deletenode(1);
	copy.print(copy);
	copy.deletenode(7);
	copy.print(copy);

	
	cout << fixed << setw(50) << "TESTING ASSIGNMENT LIST:DATA FROM OBJECT COPY" << endl;
	cout << endl;

	//creating copy list
	LinkedList assignment; 
	assignment = copy; //initializing from copy object

	//deletenode in position n for copy object
	assignment.deletenode(1);
	assignment.print(assignment);
	
	
	//insert number at nth position
	assignment.insert(0, 4);
	assignment.print(assignment);
	assignment.insert(2, 7);
	assignment.print(assignment);

	system("pause");
	return 0;
}