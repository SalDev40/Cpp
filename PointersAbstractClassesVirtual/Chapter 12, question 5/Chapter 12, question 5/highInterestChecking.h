#pragma once
#include "checkingAccount.h"
#include "bankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "noServiceChargeChecking.h"

using namespace std;
class highInterestChecking : public noServiceChargeChecking
{
public:
	highInterestChecking(int = 0, int = 0, double = 0, int = 0, int = 0);
	void print();
	void monthlyStatements();
};

