

#include "ArrayBasedQueue.h"
#include <iostream>
#include <iomanip>
using namespace std;



int main() {

	ArrayBasedQueue queue(50);

	queue.addQueue(10);
	queue.addQueue(9);
	queue.addQueue(8);
	queue.addQueue(7);
	queue.addQueue(6);

	queue.print(queue);

	cout << fixed << setw(50) << "TEST COPY CONSTRUCTOR" << endl;


	ArrayBasedQueue queuecopy(queue);
	queuecopy.print(queuecopy);

	cout << "AFTER DELETING TWO ELEMENTS: " << endl;
	queuecopy.deleteQueue();
	queuecopy.deleteQueue();
	queuecopy.print(queuecopy);
	cout << "AFTER ADDING THREE ELEMENTS: " << endl;
	queuecopy.addQueue(5);
	queuecopy.addQueue(4);
	queuecopy.addQueue(3);
	queuecopy.print(queuecopy);


	cout << fixed << setw(50) << "TEST ASSIGNMENT OPERATOR" << endl;


	ArrayBasedQueue queueassignment;
	queueassignment = queuecopy;
	queueassignment.print(queueassignment);
	cout << "AFTER DELETING TWO ELEMENTS: " << endl;
	queueassignment.deleteQueue();
	queueassignment.deleteQueue();
	queueassignment.print(queueassignment);
	cout << "AFTER ADDING THREE ELEMENTS: " << endl;
	queueassignment.addQueue(10);
	queueassignment.addQueue(9);
	queueassignment.addQueue(8);
	queueassignment.print(queueassignment);






	system("pause");
	return 0;
}