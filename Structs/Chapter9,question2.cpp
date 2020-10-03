


#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;

struct studenttype {

	string firstname;
	string lastname;
	int testscore;
	char grade;

};

const int numberstudents = 3;
studenttype student[numberstudents]; // struct variable student  == array 
studenttype school = student[numberstudents]; // struct variable school == values of variable student

void studentdata(studenttype data) { //variable school of struct studentype

	for (int i = 0; i < numberstudents; i++) {

		cout << "Info for student: " << i + 1 << endl;
		cout << "First Name: " << flush;
		cin >> student[i].firstname; // array for struct member data
		cout << "Last Name: " << flush;
		cin >> student[i].lastname;

		cout << "Test score (1-100): " << flush;
		cin >> student[i].testscore;

		while (student[i].testscore > 100 || student[i].testscore < 0) { //Implementing test score restrictions
			cout << "Try again:" << endl;
			cout << "Test score: " << flush;
			cin >> student[i].testscore;
		}

		if (student[i].testscore <= 100 && student[i].testscore >= 90) {
			student[i].grade = 'A';
		}
		else if (student[i].testscore <= 89 && student[i].testscore >= 80) {
			student[i].grade = 'B';
		}
		else if (student[i].testscore <= 79 && student[i].testscore >= 70) {
			student[i].grade = 'C';
		}
		else {
			student[i].grade = 'F';
		}

		cout << endl;
	}

}

void ReleventGrade(studenttype grade) {
	for (int i = 0; i < numberstudents; i++) {

		cout << student[i].lastname << "," << student[i].firstname << ": " << student[i].grade << endl;

	}

}

int highestscore(studenttype highscore) {

	int highest;
	highest = student[0].testscore; // setting a comparison marker 

	for (int i = 0; i < numberstudents; i++) {

		if (student[i].testscore > highest) {
			highest = student[i].testscore; // changes highest score if condition is true
		}

	}

	return highest; // return highestscore

}

void nameshighest(int highestscore1) {

	for (int i = 0; i < numberstudents; i++) {

		if (student[i].testscore == highestscore1) {
			cout << "Student(s) with the highest score is: " << student[i].lastname << ", " << student[i].firstname << endl;
		}

	}
}

int main() {

	studentdata(school); // passing variable "school" of struct studenttype
	ReleventGrade(school);

	cout << endl;

	//show highestscore info

	int highestscore1 = highestscore(school); //calling function and setting it to variable highestscore
	cout << "Highest score is: " << highestscore1 << endl;

	nameshighest(highestscore1); //passing value from highestscore1 to function nameshighest



	system("pause");
	return 0;
}