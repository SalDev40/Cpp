#include "noServiceChargeChecking.h"
#include "checkingAccount.h"
#include "bankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


noServiceChargeChecking::noServiceChargeChecking(int c, int mb, double pi, int dep, int with)
	:checkingAccount(c, mb, pi)
{
	deposit = dep;
	withdraw = with;
}

void noServiceChargeChecking::writeChecks() {

	cout << "Number of checks allowed to be written: " << checkswritten << endl;

}
void noServiceChargeChecking::payInterest() {

	cout << "Amount paid in interest: " << payint << endl;

}
void noServiceChargeChecking::minimumBalance() {
	cout << "Miniumum Balance required:  " << minbalance << endl;

}
void noServiceChargeChecking::makeDeposits() {
	cout << "Deposit Amount:  " << deposit << endl;

}
void noServiceChargeChecking::withdrawMoney() {
	cout << "Withdraw Amount:  " << withdraw << endl;

}
void noServiceChargeChecking::monthlyStatements() {
	cout << "MONTHLY STATEMENTS: " << endl;
	cout << "Balance: " << balance - 4000 << endl;
	cout << "Deposits: " << deposit << endl;
	cout << "Withdraws: " << withdraw << endl;
	cout << "Total: " << (balance - 4000 + deposit) - withdraw << endl;
}
void noServiceChargeChecking::print() {

	cout << "NO Service Charge Checking:" << endl;
	cout << "Number of checks allowed to be written: " << checkswritten << endl;
	cout << "Amount paid in interest: " << payint << endl;
	cout << "Minimum Balance Required: " << minbalance << endl;
	cout << endl;

	monthlyStatements();




}