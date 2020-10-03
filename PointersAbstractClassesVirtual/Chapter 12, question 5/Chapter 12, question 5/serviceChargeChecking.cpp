#include "serviceChargeChecking.h"
#include "checkingAccount.h"
#include "bankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


serviceChargeChecking::serviceChargeChecking(int c, int mb, double pi, int dep, int with)
	:checkingAccount(c,mb,pi)
{
	deposit = dep;
	withdraw = with;
}

void serviceChargeChecking::writeChecks() {

	cout << "Number of checks allowed to be written: " << checkswritten << endl;

}
void serviceChargeChecking::payInterest() {

	cout << "Amount paid in interest: " << payint << endl;

}
void serviceChargeChecking::minimumBalance() {
	cout << "Miniumum Balance required:  " << minbalance << endl;

}
void serviceChargeChecking::makeDeposits() {
	cout << "Deposit Amount:  " << deposit << endl;

}
void serviceChargeChecking::withdrawMoney() {
	cout << "Withdraw Amount:  " << withdraw << endl;

}
void serviceChargeChecking::monthlyStatements() {
	cout << "MONTHLY STATEMENTS: " << endl;
	cout << "Balance: " << balance - 6000 << endl;
	cout << "Deposits: " << deposit << endl;
	cout << "Withdraws: " << withdraw << endl;
	cout << "Total: " << (balance-6000 + deposit) - withdraw << endl;
}
void serviceChargeChecking:: print() {

	cout << "Service Charge Checking:" << endl;
	cout << "Number of checks allowed to be written: " << checkswritten << endl;
	cout << "Amount paid in interest: " << payint << endl;
	cout << "Minimum Balance Required: " << minbalance << endl;
	cout << endl;

	monthlyStatements();




}