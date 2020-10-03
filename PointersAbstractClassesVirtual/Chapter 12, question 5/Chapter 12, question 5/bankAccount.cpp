#include "bankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;




bankAccount::bankAccount()
{
	accountnumber = 01234;
	balance = 2000;
	string name = "sosa sal";

}
void bankAccount::ownersName() {
	cout << "Name: " << name << endl;
}
void bankAccount::accountNumber() {
	cout << "Accountnumber: " << accountnumber << endl;
}
void bankAccount::accountBalance() {
	cout << "Balance: " << balance << endl;
}

void bankAccount:: print() {

	ownersName();
	accountNumber();
	accountBalance();

}

void bankAccount::monthlyStatements() {

}

