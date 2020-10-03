#pragma once
#include "checkingAccount.h"
#include "bankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class noServiceChargeChecking : public checkingAccount
{
public:

	noServiceChargeChecking(int = 0, int = 0, double = 0, int = 0, int = 0);
	void writeChecks();
	void payInterest();
	void minimumBalance();
	void makeDeposits();
	void withdrawMoney();
	void monthlyStatements();
	void print();

protected:
	int	deposit;
	int withdraw;
};

