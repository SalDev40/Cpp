#pragma once
#include <iostream>
#include <string>
using namespace std;

struct nodeType {
	int info;
	nodeType *link;
};


class Stack
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
	void copyStack(const Stack& object);
	//copy stack elements
	Stack();
	//constructor
	Stack(const Stack& object);
	//copy constructor
	~Stack();
	//destructor
	Stack& operator=(const Stack&);
	//overload assignment operator =
	bool operator == (const Stack&);
	//overload equality operator
	void print();
	//print top element, remove it, repeat until list is done
	
private:
	int length;
	nodeType *front;
};

