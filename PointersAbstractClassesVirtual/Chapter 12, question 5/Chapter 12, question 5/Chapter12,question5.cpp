

#include <iostream>
#include <string>
#include <iomanip>
#include "bankAccount.h"
#include "checkingAccount.h"
#include "serviceChargeChecking.h"
#include "noServiceChargeChecking.h"
#include "highInterestChecking.h"
using namespace std;

int main() {

	
	checkingAccount *checking;
	serviceChargeChecking service(5, 000, 0.00, 1000, 750); //Checkswritten,MinBalance,Payinterest,Deposits,Withdraw

	checking = &service;
	checking->print(); //Could also use service.print()
	cout << endl;

	noServiceChargeChecking noservice(25, 500, 0.15, 1500, 1000); //Checkswritten,MinBalance,Payinterest,Deposits,Withdraw
	checking = &noservice;
	checking->print();
	cout << endl;

	
	
	highInterestChecking high(50, 1500, 0.25, 2000, 1250); //Checkswritten,MinBalance,Payinterest,Deposits,Withdraw
	checking = &high;
	checking->print();
	cout << endl;
	

	

	system("pause");
	return 0;

}