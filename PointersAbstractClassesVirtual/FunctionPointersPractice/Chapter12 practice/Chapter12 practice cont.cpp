#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



int  practice(int *& ptr) {

	cout << ptr << fixed << setw(5) << *ptr << endl; //  ptr and *ptr contain same memory location (p) and value (*p)
														// pointer variable passed to it (line 46)
	cout << endl;
	cout << "Changing values" << endl;
	ptr = new int; // assigning new memory location for ptr
	*ptr = 50; // assigning new value for *ptr
	cout << "Changed VALUE OF P in function: " << ptr << fixed << setw(5) << *ptr << endl; //Displaying new memory location and value at that memory
	return *ptr; //returning new value of *p which is *ptr
}
void  practice2(int *& ptr) {

	cout << ptr << fixed << setw(5) << *ptr << endl; //  ptr and *ptr contain same memory location (p) and value (*p)
													// pointer variable passed to it (line 57)
	
	cout << endl;
	cout << "Changing values" << endl;
	ptr = new int; // assigning new memory location for ptr
	*ptr = 75; // assigning new value for *ptr
	cout << "Changed VALUE OF P in function: " << ptr << fixed << setw(5) << *ptr << endl; //Displaying new memory location and value at that memory

}
int main() {

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////FUNCTIONS AND POINTERS////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int *p, a;
	p = new int;
	*p = 25;
	
	//passing pointer variable to function
	cout << "Int function" << endl;
	cout << "Value of P: " << p << fixed << setw(5) << *p << endl;//display before passing to function

	a = practice(p); //returning new value of *p which is (*ptr), and new memory location of p which is (ptr)
	cout << "NEW VALUE OF P:" << p << fixed << setw(5) << a << endl; //Displaying new memory location and value at that memory location (line 14)
	
	delete p;
	p = new int;
	*p = 25;
	
	cout << endl;

	cout << "Void function" << endl;
	cout << "Value of P: " << p << fixed << setw(5) << *p << endl; //display before passing to function

	practice2(p);
	cout << "NEW VALUE OF P:" << p << fixed << setw(5) << *p << endl; //Displaying new memory location and value at that memory location from function print2()

	system("pause");
	return 0;
}