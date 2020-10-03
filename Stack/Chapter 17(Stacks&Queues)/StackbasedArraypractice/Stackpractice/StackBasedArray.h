#pragma once

class StackBasedArray
{

	friend void print(StackBasedArray);
	//print stack

public:
	
	StackBasedArray& operator=(const StackBasedArray& otherStack);
	//overload assignment operator
	void initializeStack();
	//set stacktop to 0
	bool isEmpty() const;
	//return true id stack is empty
	bool isFull() const;
	//return true if stack is full
	void push (const int&);
	//add an element to the stack;
	int top();
	//return top element of stack
	void pop();
	//remove element from stack
	void copyStack(const StackBasedArray&);
	//copy a stack into another stack
	StackBasedArray(int = 0);
	//constructor
	StackBasedArray(const StackBasedArray&);
	//copy constructor
	~StackBasedArray();
	//destructor

	
private:
	int *list; 
	int maxStackSize; // array size
	int stackTop; // variable to keep track of the top element of the stack


};

