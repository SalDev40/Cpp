#pragma once
#include <iostream>
#include <string>
using namespace std;

//node 
struct nodeType {
	int info;
	nodeType *link;
};


class StackLinkedList
{
public:
	void initializeStack();
	//Initialize stack to beginning
	bool isEmptyStack() const;
	//return if stack is empty
	void push(int item);
	//add a element in from top
	void pop();
	//remove an element from top
	int top() const;
	//return top element
	void copyStack(const StackLinkedList& object);
	StackLinkedList();
	//constructor
	StackLinkedList(const StackLinkedList& object);
	//copy constructor
	~StackLinkedList();
	//destructor
	StackLinkedList& operator=(const StackLinkedList&);
	//overload assignment operator =
	void print();
	//print top element, remove it, repeat until list is done
	//needs to be a value parameter
	//if parameter is of type reference it'll empty the stack when passed by reference
				//cause problems when copying stack object to another

private:
	int length;
	nodeType *front;
};

