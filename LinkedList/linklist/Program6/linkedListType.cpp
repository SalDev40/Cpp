#include "linkedListType.h"
#include <iostream>
#include <string>
#include <cassert>
using namespace std;


void linkedListType::copyList(const linkedListType & otherList)
{
	if (head != NULL) { //clear list if it isn't
		destroyList();
	}
	if (otherList.isEmptyList()) { //if list being copied from is empty
		head = NULL;
		count = 0;
	}
	else {

		//copy from otherList
		count = otherList.count;
		NodeType *original = otherList.head; //create a pointer to traverse list being copied from

		//set head pointer
		head = new NodeType; //create new node
		//copy first node data
		head->data = original->data;
		head->link = NULL;

		NodeType *traversecopy = head; //create a pointer to traverse list data is being copied to

		//traverse original list
		original = original->link; 

		//copy list data node by node until list being copied from is done
		while (original != NULL) {
			//create new node
			NodeType *temp = new NodeType;

			//copy data
			temp->data = original->data;
			temp->link = NULL;

			//move pointers
			traversecopy->link = temp;
			traversecopy = temp;
			original = original->link;
		}
	}

}

linkedListType::linkedListType()
{
	//initialize to 0
	head = NULL;
	count = 0;
}

linkedListType::linkedListType(const linkedListType & otherList)
{
	head = nullptr;
	copyList(otherList); //call function that does copying
}


linkedListType::~linkedListType()
{
	destroyList(); //call function that erases list node by node 
}

const linkedListType & linkedListType::operator=(const linkedListType & otherList)
{
	if (this != &otherList) { //avoid self assessment
		copyList(otherList); //call function that does copying
	}
	return *this; 
}

bool linkedListType::isEmptyList() const
{
	return (head == NULL); //check if head doesn't point to a node
}

void linkedListType::print() const
{
	if (isEmptyList()) { //if list isn't empty
		assert(!isEmptyList());
	}
	else {
		NodeType *temp = head; //pointer to traverse list

		//print each node data until list is empty
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->link;
		}
		cout << "\nLength of List: " << count << endl; //display list length
	}
}



void linkedListType::reversePrint()
{
	//put in a  loop of 2 iterations to first print the list in reverse order
		//than to change the list back to original form 
			//since we change the links in order to print it in reverse order

	for (int i = 0; i < 2; i++) {
		NodeType *prev = NULL; //pointer that is behind where link will be attached to
		NodeType *temp = head; //pointer in the middle changing links 
		NodeType *temp1; //pointer that is ahead 

		//reverse links of each node until list is empty
		while (temp != NULL) {
			temp1 = temp->link;
			temp->link = prev;
			prev = temp;
			temp = temp1;
		}
		head = prev; //move head to previous end of list, since we reversed the links

		if (i == 0) { //print out first iteration (reversed version) not original
			cout << "Reverse Print List" << endl;
			while (prev != NULL) {
				cout << prev->data << " ";
				prev = prev->link;
			}
			cout << endl;
		}
	}
}

void linkedListType::reversePrintusingArray()
{
	cout << "Reverse Print List Using Array" << endl;
	int *list = new int[count]; //allocote new memory for an array 
	NodeType *current = head;
	int k = 0;
	
	//store each nodes data into the array until list is empty
	while (current != NULL) {
		list[k] = current->data; 
		current = current->link;
		k++; 
	}

	//print out array starting from the end
	for (int i = count-1; i >= 0; i--) {
		cout << list[i] << " ";
	}
	delete [] list; //deallocate memory
	cout << endl;

}

void linkedListType::reverseRecursivePrint(NodeType * current)
{
	if (current == NULL) { //base case once pointer is done traversing list
		return;
	}
	else {
		reverseRecursivePrint(current->link); //traverse until pointer is in the end
		cout << current->data << " "; //print out node data starting from the end since the pointer traversed all the way there
	}

}

void linkedListType::destroyList()
{
	if (isEmptyList()) { //check to see if list is empty
		assert(!isEmptyList());
	}
	else {
		//delete node by node until list is empty
		while (head != NULL) { 
			NodeType *temp = head;
			head = head->link;
			delete temp;
		}
		count = 0;
	}
}

int linkedListType::front() const
{
	if (isEmptyList()) { //check to see if list is empty
		assert(!isEmptyList());
	}
	else {
		return head->data; //return first node data
	}
}

int linkedListType::back() const
{
	if (isEmptyList()) { //check to see if list is empty
		assert(!isEmptyList());
	}
	else
	{
		NodeType *temp = head; //pointer to traverse list

		//traverse list until last node is reached
		while (temp->link != NULL) {
			temp = temp->link;
		}
		return temp->data; //return last node's data
	}
}

