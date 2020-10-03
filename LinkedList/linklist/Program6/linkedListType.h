#pragma once
#include <iostream>
using namespace std;


//node
struct NodeType {
	int data;
	NodeType* link;
};

class linkedListType
{
public:
	const linkedListType& operator=(const linkedListType&);
	//overload the assignment operator to prevent shallow copy
	bool isEmptyList() const;
	//return true if list is empty, false if not
	void print() const;
	//print list
	void reverseRecursivePrint(NodeType *);
	//reverse print the list using recursion
	void reversePrint();
	//reverse print the list
	void reversePrintusingArray();
	//reverse print the list using Array
	void destroyList();
	//delete all the node from the list
	int front() const;
	//if list isn't empty return the first element
	int back() const;
	//is list isn't empty return last element
	virtual bool search(const int& searchItem) const = 0;
	//if item is in list return true else return false
	virtual void insertFirst(const int& newItem) = 0;
	//insert new item in beginning of list
	virtual void insertLast(const int& newItem) = 0;
	//insert new item at the end of the list
	virtual void deleteNode(const int& deleteItem) = 0;
	//remove an item from list, list must not be empty
	void copyList(const linkedListType& otherList);
	//copy one list into another
	linkedListType();
	//default constructor
	linkedListType(const linkedListType& otherList);
	//copy constructor to prevent shallow copy
	~linkedListType();
	//destructor

	NodeType *head; //pointer to the first node of the list
protected:
	int count; //variable to store length of list 

};