#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class bankAccount
{
public:
	
	void ownersName();
	void accountNumber();
	virtual void accountBalance();
	virtual void makeDeposits() = 0;
	virtual void withdrawMoney() = 0;
	virtual void monthlyStatements();
	virtual void print();
	
	bankAccount();

protected:
	int accountnumber;
	int balance;
	string name;

};

