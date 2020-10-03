#include "StackBasedArray.h"
#include <cassert>
#include <iostream>
using namespace std;

StackBasedArray::StackBasedArray(int size)
{
	if (size <= 0) {
		maxStackSize = 100; //defualt maxsize
	}
	else {
		maxStackSize = size;
	}
	stackTop = 0; //make stackTop 0
	list = new int[maxStackSize]; // make list point to a allocated address storing an array of ints
}

StackBasedArray::StackBasedArray(const StackBasedArray & otherStack)
{
	list = nullptr;
	copyStack(otherStack);
}


StackBasedArray::~StackBasedArray()
{
	delete[] list;
}

StackBasedArray & StackBasedArray::operator=( const StackBasedArray & otherStack)
{
	if (this != &otherStack) { // avoid self assessment
		copyStack(otherStack);
	}

	return *this;
}

void StackBasedArray::initializeStack()
{
	stackTop = 0;
}

bool StackBasedArray::isEmpty() const
{
	return (stackTop == 0);
}

bool StackBasedArray::isFull() const
{
	return (stackTop == maxStackSize);
}

void StackBasedArray::push(const int & newItem)
{
	if (!isFull()) {
		list[stackTop] = newItem; //position that stackTop is at is now the newItem
		stackTop++; //increment stackTop
	}
	else {
		assert(!isFull());
	}
}

int StackBasedArray::top()
{
	assert(stackTop != 0);
	return list[stackTop-1]; //stackTop-1 is top element
}

void StackBasedArray::pop()
{

	if (!isEmpty()) {
		stackTop--; //decrement stackTop
	}
	else {
		assert(!isEmpty());
	}
}

void StackBasedArray::copyStack(const StackBasedArray & otherStack)
{
	delete[] list; //get rid of current list
	maxStackSize = otherStack.maxStackSize; 
	stackTop = otherStack.stackTop;

	list = new int[maxStackSize]; //create new list
	for (int i = 0; i < maxStackSize; i++)
	{
		list[i] = otherStack.list[i]; //copy elements from list passed as a parameter
	}

}
