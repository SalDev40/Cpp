#include "Stack.h"
#include <iostream>
#include <cassert>
using namespace std;



void Stack::initializeStack()
{
	if (isEmptyStack()) { //check if stack is empty
		front == NULL;
	}
	else {
		nodeType* temp; //pointer to delete
		//Deleting one node at a time
		while (front != NULL) {
			temp = front;
			front = front->link; //traverse front to next node
			delete temp;
		}
	}
}

bool Stack::isEmptyStack() const
{
	return (front == NULL);
}


//**********************************************
//INSERTION AND DELETION BOTH HAPPEN FROM ONE END
//**********************************************

void Stack::push(int item)
{
	//inserting in front of list always
	nodeType* newNode = new nodeType; //create new node
	newNode->info = item;
	newNode->link = front; //set newNode link to current node front is pointing at

	front = newNode; //Will always be adding from one end 
						//Allows to just update front pointer

	length++; //increment length by one
}

void Stack::pop()
{
	//deleting last item always
	if (!isEmptyStack()) {  //check if stack is empty
		nodeType* trash;
		trash = front; //make trash point to where front is
		front = front->link; //Move front to next node
		delete trash; //deallocate memory
	}
	else {
		assert(!isEmptyStack()); //alert can't remove from empty stack
	}
	length--; //decrement length by 1
}



int Stack::top() const
{
	if (!isEmptyStack()) {  //check if stack is empty
		return front->info;
	}
	else {
		assert(!isEmptyStack()); //terminate if stack is empty
	}
}

void Stack::copyStack(const Stack & object)
{
	if (!isEmptyStack()) { //check if stack is empty
		initializeStack(); //reset stack
	}

	if (object.front == NULL) { //if other stack is empty set stack data is being copied to NULL
		front = nullptr;
	}
	else {  //if stack being copied from isn't empty

		nodeType* temp; // pointer for list being copied from
		nodeType* current; //pointer for list being copied to
		temp = object.front; //set temp to point to copy from list

		//set front(head) pointer
		front = new nodeType; //create new node
		front->info = temp->info; //set first node
		front->link = NULL;

		current = front;
		temp = temp->link; //move temp to next position
		length++; //increment length by one for first node created

		//Copy node by node
		while (temp != NULL)
		{
			//create new node
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

Stack::Stack()
{
	front = nullptr;
	length = 0;
}

Stack::Stack(const Stack & object)
{
	front = nullptr;
	copyStack(object);
}


Stack::~Stack()
{
	initializeStack(); //delete node by node
}

Stack& Stack::operator=(const Stack & object)
{
	if (this != &object) { //avoid self assessment
		copyStack(object);
	}
	return *this;
}

bool Stack::operator==(const Stack & object)
{
	Stack temp(object); //create a temp object and intialize it with object so we can call pop() because
						//object in parameter is const reference, we can't make changes to it

	//check if both stacks have the same length
	if (length != temp.length) {
		return false;
	}
	else {

		while (length != 0) {
			//check if top value is the same for both stacks
			if (top() != temp.top()) {
				return false;
			}
			else {
				//remove top element from both stacks
				pop();
				temp.pop();
			}
		}
	}
	return true;
}

void Stack::print()
{
	Stack object(*this); //create a temp object and intialize it with object calling print()
							//so when we call pop() it doesn't change calling object 


	while (!object.isEmptyStack()) {
		//print top node and then remove it
		cout << object.top() << " ";
		object.pop();
	}
	cout << endl;
	cout << "LENGTH IS: " << length << endl;

}
