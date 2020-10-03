#include "billType.h"
#include <iostream>
#include <string>
using namespace std;


billType::billType(int id, double hospitcharg, double pharmcharg, double docfee, double roomcharg)
{
	ID = id;
	hospitalcharges = hospitcharg;
	pharmacycharges = pharmcharg;
	doctorsfee = docfee;
	roomcharges = roomcharg;
}

void billType::patientID() {
	cout << "ID: " << ID << endl;
}
	
void billType::patientscharges() {
	cout << "Hospital charges: " << hospitalcharges << endl;
	cout << "Pharmacy Charges: " << pharmacycharges << endl;
	cout << "Doctor's Fee: " << doctorsfee << endl;
	cout << "Room Charges: " << roomcharges << endl;

}
