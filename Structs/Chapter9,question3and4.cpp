

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct menuItemType {

	string menuItem;
	double menuPrice;

};

//Number of items
const int noItems = 8;

//array of struct type
menuItemType menuList[noItems];


//Function creating array to store item and it's price and in menuList[] of struct type

void getdata(string items[], double price[]) {

	//Creating array to store item and it's ptice and in menuList[] of struct type
	for (int i = 0; i < noItems; i++) {

		menuList[i].menuItem = items[i]; 
		menuList[i].menuPrice = price[i];
		
	}

}

//Function to show menu

void showMenu() {
	for (int i = 0; i < noItems; i++) {
		cout << menuList[i].menuItem << ": " << fixed << setprecision(2) << "$" << menuList[i].menuPrice << endl;
	}
}

//Calculate and return total

double bill() {

	double total = 0.0;
	int item;
	
	for (int i = 0; i < noItems; i++) {

		cout << "Enter Item (1-8) or 0 for quit : " << flush;
		cin >> item;

		if (item == 0) {
			break;
		}
		while (item >= 8){
			cout << "Enter Item (1-8) or 0 for quit : " << flush;
			cin >> item;
		}

		cout << menuList[item - 1].menuItem << ": " << menuList[item - 1].menuPrice << endl; //Display item and its price
		cout << endl; 
		total += menuList[item-1].menuPrice; // accumulate total
		
	}
	
	return total; //return total

}


int main() {

	int item;
	double total; //accumulator
	double tax;

	string items[noItems] = { "1.Plain Egg","2.Bacon and Egg", "3.Muffin","4.French Toast", "5.Fruit Basket",
		"6.Cereal", "7.Coffee","8.Tea" };
	double price[noItems] = { 1.45,2.45,0.99,1.99,2.49,0.69,0.50,0.75 };

	getdata(items, price); //Pass both arrays to function getdata()


	showMenu();
	cout << endl;

	total = bill(); //Set return value of bill() = total

	tax = total * .05; 
	cout << endl;

	cout << "Tax: $" << fixed << setprecision(2) << tax << endl;
	cout << "Total: $" << fixed << setprecision(2) << total + tax << endl;




	system("pause");
	return 0;
}