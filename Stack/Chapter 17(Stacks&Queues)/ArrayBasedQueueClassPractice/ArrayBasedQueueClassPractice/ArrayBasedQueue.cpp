#include "ArrayBasedQueue.h"
#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;



ArrayBasedQueue::~ArrayBasedQueue()
{
	delete[] list;
}

ArrayBasedQueue& ArrayBasedQueue::operator=(const ArrayBasedQueue& object)
{
	if (this != &object) {
		copyQueue(object);
	}
	return *this;
}

bool ArrayBasedQueue::isEmpty() const
{
	return (count == 0);
}

bool ArrayBasedQueue::isFull() const
{
	return (count == maxsize);
}

void ArrayBasedQueue::initalizeQueue()
{
	front = 0;
	rear = maxsize - 1;
	count = 0;
}

int ArrayBasedQueue::first()  const
{
	assert(!isEmpty());
	return list[front];
}

int ArrayBasedQueue::back() const
{
	assert(!isEmpty());
	return list[rear];

}

void ArrayBasedQueue::addQueue(int number)
{
	//check if queue is full
	if (!isFull()) {
		//use modulus to create circular array
		rear = (rear + 1) % maxsize;
		list[rear] = number;
		count++;
	}
	else {
		assert(!isFull());
	}
}

void ArrayBasedQueue::deleteQueue()
{
	//check if list is empty
	if (!isEmpty()) {
		//modulus for circular array
		front = (front + 1) % maxsize;
		count--;
	}
	else {
		assert(!isEmpty());
	}
}

void ArrayBasedQueue::copyQueue(const ArrayBasedQueue & object)
{
	delete[] list;

	//check if being copied from queue is empty
	if (object.isEmpty()) {
		front = rear = NULL;
	}

	//copy queue data members
	front = object.front;
	rear = object.rear;
	maxsize = object.maxsize;
	count = object.count;

	//create dynamic array
	list = new int[maxsize];

	//copy element by element
	for (int i = 0; i < maxsize; i++)
	{
		list[i] = object.list[i];
	}

}

ArrayBasedQueue::ArrayBasedQueue(int size)
{
	//check if size is > 0
	if (size <= 0) {
		maxsize = 100;
	}
	else {
		maxsize = size;
	}
	//empty queue
	initalizeQueue();
	//create dynamic array
	list = new int[maxsize];

}

ArrayBasedQueue::ArrayBasedQueue(const ArrayBasedQueue & object)
{
	list = nullptr;
	copyQueue(object);
}

void ArrayBasedQueue::print(ArrayBasedQueue queue1) {



	//print first element, delete first, ..... 
	while (!queue1.isEmpty()) {
		cout << queue1.first() << " ";
		queue1.deleteQueue();
	}


	cout << endl;
	cout << "Count is:  " << count << endl;
}