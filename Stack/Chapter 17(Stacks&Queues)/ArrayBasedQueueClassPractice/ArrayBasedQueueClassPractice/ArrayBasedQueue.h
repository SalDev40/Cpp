#pragma once
#include <iostream>
using namespace std;

class ArrayBasedQueue
{
public:
	
	void print(ArrayBasedQueue object);
	//display queue
	bool isEmpty() const;
	//return if queue is empty
	bool isFull() const;
	//return if queue is full
	void initalizeQueue();
	//set queue to an empty state
	int first() const;
	//return first element
	int back() const;
	//return last element
	void addQueue(int number);
	//add a number to queue
	void deleteQueue();
	//delete a number from queue
	void copyQueue(const ArrayBasedQueue& object);
	//copy queue to another
	ArrayBasedQueue(int size = 0);
	//constructor
	ArrayBasedQueue(const ArrayBasedQueue& object);
	//copy constructor
	~ArrayBasedQueue();
	//destructor
	ArrayBasedQueue& operator=(const ArrayBasedQueue& object);
	//overload assignment operator

private:

	int maxsize;
	int count;
	int front;
	int rear;
	int *list;

};


