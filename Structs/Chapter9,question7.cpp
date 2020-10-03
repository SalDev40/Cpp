


#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;

struct footballplayer {
	string firstname;
	string lastname;
	string position;
	int touchdowns;
	int catches;
	int passingyards;
	int receivingyards;
	int rushingyards;
};

const int numbersplayers = 2;
footballplayer player[numbersplayers]; // struct variable player  == array 
footballplayer team = player[numbersplayers]; // struct variable team == values of array variable player

void playerdata(footballplayer data) { //variable team of struct footballplayer

	for (int i = 0; i < numbersplayers; i++) {

		cout << "Info for player: " << i + 1 << endl;
		cout << "First Name: " << flush;
		cin >> player[i].firstname;
		cout << "Last Name: " << flush;
		cin >> player[i].lastname; // input name for array for struct member name

		cout << "Position: " << flush;
		cin >> player[i].position;
		cout << "Touchdowns: " << flush;
		cin >> player[i].touchdowns;
		cout << "Catches: " << flush;
		cin >> player[i].catches;
		cout << "Passing yards: " << flush;
		cin >> player[i].passingyards;
		cout << "Receving yards: " << flush;
		cin >> player[i].receivingyards;
		cout << "Rushing yards: " << flush;
		cin >> player[i].rushingyards;

		cout << endl;
	}

}

void outputdata(footballplayer output) {

	for (int i = 0; i < numbersplayers; i++) {

		cout << "First Name: " << player[i].firstname << endl;
		cout << "Last Name: " << player[i].lastname << endl;
		cout << "Position: " << player[i].position << endl;
		cout << "Touchdowns: " << player[i].touchdowns << endl;
		cout << "Catches: " << player[i].catches << endl;
		cout << "Receiving Yards: " << player[i].receivingyards << endl;
		cout << "Passing Yards: " << player[i].passingyards << endl;
		cout << "Rushing Yards: " << player[i].rushingyards << endl;

		cout << endl;
	}

}

void search(footballplayer searching) {

	string data, name, name2, typo, change;
	int number;


	cout << "Do you need to make any updates to a player's data (yes/no)? " << flush;
	cin >> data;


	if (data == "no" || data == "No") {
		cout << "See you Next Time!" << endl;
		system("pause");
		exit(0);
	}

	cout << "How many players do you need to update? " << flush;
	cin >> number;

	for (int i = 0; i < number; i++) {

		do {
			cout << endl;
			cout << "Please type in Players First name (exactly as is): ";
			cin >> name;
			cout << "Please type in Players Last name (exactly as is): ";
			cin >> name2;
			cout << "Did you make a typo and need to try again (yes/no)? ";
			cin >> typo;

		} while (typo == "yes" || typo == "Yes");

		cout << endl;
		for (int j = 0; j < numbersplayers; j++) {

			if (name == player[j].firstname && name2 == player[j].lastname) {

				cout << "Change Position? (Y/N) " << flush;
				cin >> change;
				if (change == "y" || change == "Y") {
					cout << "New: " << flush;
					cin >> player[i].position;
					}
				cout << "Change Touchdowns? (Y/N) " << flush;
				cin >> change;
				if (change == "y" || change == "Y") {
					cout << "New: " << flush;
					cin >> player[i].touchdowns;
				}				cout << "Change Catches? " << flush;
				cin >> change;
				if (change == "y" || change == "Y") {
					cout << "New: " << flush;
					cin >> player[i].catches;
				}
				cout << "Change Receiving Yards? (Y/N) " << flush;
				cin >> change;
				if (change == "y" || change == "Y") {
					cout << "New: " << flush;
					cin >> player[i].receivingyards;
				}
				cout << "Change Passing Yards? (Y/N) " << flush;
				cin >> change;
				if (change == "y" || change == "Y") {
					cout << "New: " << flush;
					cin >> player[i].passingyards;
				}
				cout << "Change Rushing Yards? (Y/N) " << flush;
				cin >> change;
				if (change == "y" || change == "Y") {
					cout << "New: " << flush;
					cin >> player[i].rushingyards;
				}
				break;
			}

			else if (name != player[j].firstname && name2 != player[j].lastname) {
				cout << "Player not found!" << endl;
			}
			
		}
	}

	
}


int main() {

	playerdata(team); // passing variable "team" of struct footballplayer
	
	search(team);

	cout << endl;
	//Updated
	outputdata(team);
	

	system("pause");
	return 0;
}

