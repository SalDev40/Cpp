

#include<iostream>
#include <iomanip>
#include <string>
using namespace std;


int main() {
	
	cout << fixed << setw(80) <<  "POINTERS , DEREFERCING(*) AND ADRESS OF OPERATOR(&) " << endl;
	cout << endl;


	int *p;
	int x = 67;

	p = &x; // p is pointing to memory address of x

	cout << p << endl; //print  memory address of x
	cout << *p << endl; // displaying value at address of x, printing value of x



	///////////////////////////////// DYNAMIC VARAIBLES (NEW , DELETE)/////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////

	cout << endl;
	cout << fixed << setw(50) << "DYNAMIC VARIABLES" << endl;
	cout << endl;
	
	p = new int; // points to memory of non existent initialized data 
	*p = 9; // gives *p  a value to be stored in createad memory allocation 

	cout << p << endl; // prints address location given by (new int)
	cout << *p << endl;

	delete p; // make sures garbage is deleted for memory re allocation
	p = NULL; // make sures p isn't dangling, same as p = 0

	p = new int; // gives p  a new memory address 
	*p = 77;

	cout << p << endl;
	cout << *p << endl;

	p++; // Increments memory address (value of p) by amout of bytes type p holds // int = increment by 4 bytes 

	cout << p << endl;

	
	///////////////////////////////  DYNAMIC ARRAY //////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////
	
	cout << endl;
	cout << fixed << setw(50) << "DYNAMIC ARRAY" << endl;
	
	int *q;

	q = new int[10]; // allocates 10 contiguous memory location of type int, and stores memory address of first elements 
																				// as the value of q

	*q = 25; // stores 25 into first element due to q holding memory address of the first element

	
	for (int i = 0; i < 10; i++) {

		q[i] = i; // stores value of (i) into the memory address of q[0], q[1], q[2] ...... q[i]
		cout << q[i];

	}

	delete [] q;


	///////////////////////////////  DYNAMIC TWO-DIMENSIONAL ARRAY //////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////

	cout << endl;
	cout << endl;
	cout << fixed << setw(60) << "TWO DIMENSIONAL DYNAMIC ARRAY" << endl;


	int **k; // *k and k are pointers // k = store address of pointer or array of pointers
									 // *k = store address of an int memory space or an array of int values

	int numrows, numcols;

	cout << "Enter Rows: " << flush;
	cin >> numrows;

	cout << "Enter Columns: " << flush;
	cin >> numcols;


	k =  new int* [numrows]; //create an array of 10 int pointers

	for (int i = 0; i < numrows; i++) {
		k[numrows] = new int[numcols]; //create columns
	}


	for (int i = 0; i < numrows; i++) {

		for (int j = 0; j < numcols; j++) {
			
			cout << "Enter a value for Row: " << i << ", Column: " << j << ": " << flush;
			cin >> k[i][j]; //Enter values of array
			cout << endl;

		}

	}


	//DISPLAY VALUES OF ARRAY

	for (int i = 0; i < numrows; i++) {

		for (int j = 0; j < numcols; j++) {
			cout << k[i][j] << endl;
		}

	}





















	system("pause");
	return 0;






}