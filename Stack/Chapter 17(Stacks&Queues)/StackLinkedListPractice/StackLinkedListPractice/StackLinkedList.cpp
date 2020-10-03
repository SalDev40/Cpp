#include "StackLinkedList.h"
#include <iostream>
#include <cassert>
using namespace std;



void StackLinkedList::initializeStack()
{
	if (isEmptyStack()) {
		front == NULL;
	}
	else {
		nodeType *temp; //pointer to delete
		//Deleting one node at a time
		while (front != NULL) {
			temp = front;
			front = front->link; //traverse front to next node
			delete temp;
		}
	}
}

bool StackLinkedList::isEmptyStack() const
{
	return (front == NULL);
}

void StackLinkedList::push(int item)
{

	//create new node
	nodeType *newNode = new nodeType;
	newNode->info = item;
	newNode->link = front;

	front = newNode; //Will always be adding from one end 
						//Allows to just update front pointer

	length++; //increment length by one
}

void StackLinkedList::pop()
{
	//check if stack is empty
	if (!isEmptyStack()) {
		nodeType *trash;
		trash = front; //make trash point to where front is
		front = front->link; //Move front to next node
		delete trash; //deallocate memory
	}	
	else {
		assert(!isEmptyStack());
	}
	length--; //decrement length by 1
}

int StackLinkedList::top() const
{
	if (!isEmptyStack()) {
		return front->info;
	}
	else {
		assert(!isEmptyStack());
	}
}

void StackLinkedList::copyStack(const StackLinkedList & object)
{
	if (!isEmptyStack()) {
		initializeStack(); //reset stack
	}

	if (object.front == NULL) { //if other stack is empty set copied to stack at NULL
		front = nullptr;
	}
	else {  //if stack being copied from isn't empty

		nodeType *temp; // pointer for list being copied from
		nodeType *current; //pointer for list being copied to
		temp = object.front; //set temp to point to copy from list

		front = new nodeType; //create new node
		front->info = temp->info; //set first node
		front->link = NULL;
		current = front;

		temp = temp->link; //move temp to next position
		length++; //increment length by one for first node created

		//Copy node by node
		while (temp != NULL)
		{
			nodeType* newNode = new nodeType;
			newNode->info = temp->info;
			newNode->link = NULL;
			current->link = newNode;//make current -> link point to newNode
			current = newNode; //move current to newNode position
			temp = temp->link; //traverse temp
			length++; //increment length for every node created
		}
	}
}

StackLinkedList::StackLinkedList()
{
	front = nullptr;
}

StackLinkedList::StackLinkedList(const StackLinkedList & object)
{
	front = nullptr;
	copyStack(object);
}


StackLinkedList::~StackLinkedList()
{
	initializeStack();
}

StackLinkedList & StackLinkedList::operator=(const StackLinkedList & object)
{
	if (this != &object) {
		copyStack(object);
	}
	return *this;
}

void StackLinkedList::print()
{
	//make a copy object, so we empty original stack
	StackLinkedList object(*this);
	
	//show top, remove top, ....
	while (!object.isEmptyStack()) {
		cout << object.top() << " ";
		object.pop();
	}
	cout << endl;
	cout << "LENGTH IS: " << length << endl;

}
