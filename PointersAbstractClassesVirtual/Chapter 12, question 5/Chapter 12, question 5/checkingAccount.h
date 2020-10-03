#pragma once
#include "bankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class checkingAccount:public bankAccount
{
public:

	checkingAccount(int = 0, int = 0, double = 0);
	virtual void writeChecks() = 0;
	virtual void payInterest() = 0;
	virtual void minimumBalance() = 0;

protected:
	int checkswritten;
	int minbalance;
	double payint;
	int balance;
};

