
#include <iostream>
using namespace std;



int binarySearch(int v[], int x, int size, int &iterations) {

	int start = 0; // start at beginning of array
	int end = size - 1; //end of array (size - 1), because array index starts at 0

	while (start <= end) {
		iterations++;
		int mid = (start + end) / 2; //redefine mid point during every loop

		//check if mid element is item to be found
		if (v[mid] == x) {
			return mid;
		}
		else if (x < v[mid]) {
			end = mid - 1; //move the end to element before mid element (shrink search scope)
		}
		else {
			start = mid + 1; //move start to element after mid position (shrink search scope)
		}
	}
	return -1;
}

//SHOW FIRST OR LAST OCCURRENCE OF A NUMBER IN ARRAY IF MULTIPLE OCCURRENCES OF NUMBER
int binarySearchfirstorlast(int v[], int x, int size, bool searchFirst) {

	int start = 0; // start at beginning of array
	int end = size - 1; // end of array (size - 1), because array index starts at 0
	int result = -1;
	while (start <= end) {

		int mid = (start + end) / 2; //redefine mid point during every loop
		if (v[mid] == x) {
			result = mid;

			if (searchFirst) { //searchFirst is a flag
				end = mid - 1; //for finding first occurrence
			}
			else {
				start = mid + 1; // for finding last occurrence
			}
		}
		else if (x < v[mid]) {
			end = mid - 1; //move the end to element before mid element (shrink search scope)
		}
		else {
			start = mid + 1; //move start to element after mid position (shrink search scope)
		}
	}
	return result;
}

int trinarySearch(int v[], int x, int size, int &iterations) {
	int start = 0;
	int end = size - 1;

	while (start <= end) {
		int mid = (start + end) / 2;
		int third = mid * 2 / 3;
		int twothird = mid * 4 / 3;
		iterations++;
		if (x == v[third]) {
			return third;
		}
		if (x == v[twothird]) {
			return twothird;
		}
		else if (x < v[third]) {
			//end = third - 1;
		}
		else if (x > v[twothird]) {
			start = twothird + 1;;

		}
		else if (x > v[third] && x < v[twothird]) {
			start = third + 1;
			end = twothird - 1;
		}
		else {
			return -1;
		}
		size = size / 3;
		int end = size;

	}
	return -1;
}

int  main() {
	int iterations = 0;
	int values[] = { 0,1,2,3,4,5,6,7,8 }; //must be sorted for binary search to work
	int length = sizeof(values) / 4;

	//number you want to find
	int find;
	cout << "number: " << flush;
	cin >> find;

	if (trinarySearch(values, find, length, iterations) == -1) {
		cout << "Element doesn't exist" << endl;
		cout << "Number of iterations: " << iterations << endl;
	}
	else {
		cout << "Number: " << find << ", exists at element: " << trinarySearch(values, find, length, iterations) << endl;
		cout << "Number of iterations: " << iterations << endl;
	}

	cout << "______________________________________BINARY SEARCH" << endl;
	cout << "______________________________________BINARY SEARCH" << endl;
	cout << "______________________________________BINARY SEARCH" << endl;


	if (binarySearch(values, find, length, iterations) == -1) {
		cout << "Element doesn't exist" << endl;
		cout << "Number of iterations: " << iterations << endl;
	}
	else {
		cout << "Number: " << find << ", exists at element: " << binarySearch(values, find, length, iterations) << endl;
		cout << "Number of iterations: " << iterations << endl;
	}


	system("pause");
	return 0;
}