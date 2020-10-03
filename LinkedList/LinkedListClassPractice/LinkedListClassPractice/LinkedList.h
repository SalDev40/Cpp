#pragma once
#include <iostream>
#include <string>
using namespace std;





struct nodeType {
	int info; //creating node info section
	nodeType *link;//creating link that stores address of next node
};

class LinkedList
{
public:

	void InitializeList();
	//set front = NUll
	bool islistEmpty() const;
	//return true if list is empty
	int size() const;
	//return length of list
	void createList(int item);
	//create the list
	void insertbeginning(int item);
	//insert a node in the beginning
	void insertlast(int item);
	//insert a node in the end
	void deletenode(int position);
	//delete a node from list at given position
	void insert(int item,int position);
	//insert a node at a nth position
	void print(const LinkedList& object);
	//display the linked list
	void destroyList();
	//destroy list
	void copyList(const LinkedList& object);
	//copy list
	LinkedList(int = 0);
	//constructor
	~LinkedList();
	//destructor
	LinkedList(const LinkedList& object);
	//copy constructor
	LinkedList& operator=(const LinkedList&);
	//overload = operator


private:
	
	nodeType *current,*front; //pointer front that will point to head of list
								//pointer current to traverse list

	int length; //size of list
	//increment each time a node is added
	//delete each time a node is deleted
};

