#include "bookType.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

void bookType::setshowtitle() {
	string title;
	cout << "Title: " << flush;
	cin >> title;
	tit = title; // setting instance variable tit to entered title
}

void bookType::checktitle() { // skipped

}
void bookType::setshowcopies(){
	int copies;
	cout << "Number of copies: " << flush;
	cin >> copies;
	cop = copies; // Setting instance variable cop to number of copies
	
}

int bookType::updatecopies() {
	char update;
	int newupdate;
	cout << "Current number of copies: " << cop << endl;

	do {
		cout << "Do you need to make an update (Y/N)? " << flush;
		cin >> update;

	} while (update != 'y' && update != 'Y' && update != 'N' && update != 'n');

	if (update == 'y' || update == 'Y') {
		cout << "New amount: " << flush;
		cin >> newupdate;
		cop = newupdate; // setting instance variable copy to new value
	}
	else {
		cop = cop;
	}
	return cop;
}
void bookType::setshowpublisher() {
	string publisher;
	cout << "Publisher: " << flush;
	cin >> publisher;
	publ = publisher;
}
void bookType::checkpublisher() { 
}
void bookType::setshowISBN() {
	int ISBN;
	cout << "ISBN Number: " << flush;
	cin >> ISBN;
	ISbn = ISBN;
}
int bookType::updateISBN() {
	char update;
	int newupdate;
	cout << "Current ISBN: " << ISbn << endl;

	do {
		cout << "Do you need to make an update (Y/N)? " << flush;
		cin >> update;

	} while (update != 'y' && update != 'Y' && update != 'N' && update != 'n');


	if (update == 'y' || update == 'Y') {
		cout << "New ISBN: " << flush;
		cin >> newupdate;
		ISbn = newupdate; // setting instance variable Isbn to new value
	}
	else {

		ISbn = ISbn;
	}
	return ISbn;
}
void bookType::setshowprice() {
	int price;
	cout << "Price: " << flush;
	cin >> price;
	pri = price;
}

int bookType::updateprice() {

	char update;
	int newupdate;
	cout << "Current Price: " << pri << endl;

	do {
		cout << "Do you need to make an update (Y/N)? " << flush;
		cin >> update;

	} while (update != 'y' && update != 'Y' && update != 'N' && update != 'n');

	if (update == 'y' || update == 'Y') {
		cout << "New price: " << flush;
		cin >> newupdate;
		pri == newupdate; // setting instance variable pri to new value
	}
	else {

		pri = pri;
	}
	return ISbn;	
}

void bookType::setshowauthor() {
	string author;
	cout << "Auhtor: " << flush;
	cin >> author;
	aut = author;
}
void bookType::checkauthor()
{
}

