#include "checkingAccount.h"
#include "bankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


checkingAccount::checkingAccount(int checks,int minb, double payi)
{
	checkswritten = checks;
	minbalance = minb;
	payint = payi;
	balance = 7000;
}


