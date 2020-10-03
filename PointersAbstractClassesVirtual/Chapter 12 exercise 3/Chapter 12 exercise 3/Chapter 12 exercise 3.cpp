
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {


	string *a; // store last name
	int *b; // store votes
	int *c; // store % of votes per candidate

	int total = 0; // accumulator
	
	a = new string[2];
	b = new int[2];
	c = new int[2];


	for (int i = 0; i < 2; i++) {

		cout << "Enter last name of candidate " << i << ": " << flush;
		cin >> a[i];

	}

	cout << endl;

	for (int i = 0; i < 2; i++){
		
		cout << "Enter the votes receieved by " << a[i] << ": " << flush;
		cin >> b[i];
		total += b[i];
	}

	cout << total;
	cout << endl;
	
	
	cout << "Candidate" << fixed << setw(25) << "Votes Recieved" << setw(25) << "% of Total Votes" << endl;
	for (int i = 0; i < 2; i++) {

		cout << a[i] << fixed << setw(25) << b[i] << setw(25) << c[i] << endl;


	}







	system("pause");
	return 0;
}