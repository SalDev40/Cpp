#include "highInterestChecking.h"
#include "checkingAccount.h"
#include "bankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "noServiceChargeChecking.h"

using namespace std;


highInterestChecking::highInterestChecking(int c, int mb, double pi, int dep, int with)
	:noServiceChargeChecking(c, mb, pi,dep,with)
{

}


void highInterestChecking::monthlyStatements() {
	cout << "MONTHLY STATEMENTS: " << endl;
	cout << "Balance: " << balance - 3500 << endl;
	cout << "Deposits: " << deposit << endl;
	cout << "Withdraws: " << withdraw << endl;
	cout << "Total: " << (balance -3500 + deposit) - withdraw << endl;
}
void highInterestChecking::print() {

	cout << "HighInterest Checking:" << endl;
	cout << "Number of checks allowed to be written: " << checkswritten << endl;
	cout << "Amount paid in interest: " << payint << endl;
	cout << "Minimum Balance Required: " << minbalance << endl;
	cout << endl;

	monthlyStatements();




}