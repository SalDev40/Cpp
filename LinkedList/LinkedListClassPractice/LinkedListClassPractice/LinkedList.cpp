#include "LinkedList.h"
#include <iostream>
#include <string>
#include <cassert>
using namespace std;



void LinkedList::insert(int item, int position)
{
	/* create new node */
	cout << "Inserting: " << item << " At postion: " << position << endl;
	nodeType *temp = new nodeType; //create new node
	temp->info = item;

	current = front; //set current to beginning

	if (islistEmpty() || position == 1) {
		insertbeginning(item);
	}
	else if (position <= 0 ) {
		cout << "LIST DOESN'T EXIST HERE" << endl;
		assert(!position <= 1);
	}
	else if (position > length+1) { 
		cout << "ADDING ELEMENT AT A POSITION BEYOND LIST END,"
			<< "FURTHEST YOU CAN ADD IS ONE POSITION IN THE END" << endl;
		assert(!position > length + 1);
	}
	else {
		for (int i = 0; i < position - 2; i++) //position - 2 b/c of list element starting at 0 not 1 
		{
			current = current->link; //traverse list until one node before insertion location
		}
		 
		temp->link = current->link; //set temp->link to what current->link is pointing at
		current->link = temp; //make current->link point to temp
	}
	
	length++; //Increment length
}

void LinkedList::print(const LinkedList& object) 
{
	current = front;
	if (islistEmpty()) {
		cout << "LIST IS EMPTY" << endl;
	}

	else {
	while (current != NULL) { //until list is finished
		cout << current->info << " "; //print info
		current = current->link; //traverse to next node
		}
	}
	cout << "\nLIST LENGTH: " << length << endl;
	cout << endl;
}

void LinkedList::destroyList()
{
	//delete node by node
	nodeType *temp; 
	while (front != NULL) {
		temp = front; //make temp point to where first is pointing
		front = front->link; //traverse front node to next node
		delete temp; // since temp is pointing to what front was pointing at, we can delete it
	}
	current = NULL; //reset pointers
	length = 0; //reset length
}

void LinkedList::copyList(const LinkedList & object)
{
	destroyList(); //clean list of everything//reset pointers
	
	if (object.islistEmpty()) { //empty list nothing to copy
		cout << "LIST IS EMPTY" << endl;
		front = NULL;
	}
	else {

		length = object.length;
		nodeType *temp; //traversal pointer for object we are copying from 
		nodeType *copy; //traversal pointer for new list we are copying to
		temp = object.front;  //temp is pointing to first node of list info is being copied from
		front = new nodeType; //create first node for new list
		front->info = temp->info; //make first node of new list contain info of list being copied from 
		current = front; //make current point to first of new list
		copy = front;//make copy point to first of new list
		temp = temp->link; //move temp pointer to next node  

			//copy one node at a time
		while (temp != NULL) { //run loop until list being copied from is done
			current = new nodeType; //create new node
			current->info = temp->info; //copy info from what temp pointer is pointing at
			current->link = NULL;
			copy->link = current; //set copy pointer link to point to new node created
			copy = current; // traverse copy to same location as current(new node)
			temp = temp->link; //traverse temp pointer//want traverse at end so loop knows when temp is NULL
		}
	}
}

LinkedList::LinkedList(int item)
{
	length = 0; //set length of list to 0
	front = NULL; 
	current = NULL;
	
}

LinkedList::~LinkedList()
{
	destroyList();
}

LinkedList::LinkedList(const LinkedList & object)
{
	front = nullptr;
	copyList(object);
}

LinkedList & LinkedList::operator=(const LinkedList & object)
{
	destroyList();
	if (this != &object) { //avoid self assessment
		copyList(object);
	}
	return *this;
}


void LinkedList::InitializeList()
{
	front = NULL;
}

bool LinkedList::islistEmpty() const
{
	return (front == NULL);
}

int LinkedList::size() const
{
	return length; //return size of list
}

void LinkedList::createList(int item)
{
	//create new node and set info to item
	nodeType *temp = new nodeType;
	temp->info = item;
	temp->link = NULL;

	nodeType* help; //pointer to traverse list
	help = front;// help starts at beginning	

	if (islistEmpty()) { //creating first node
		front = temp; 
		help = temp;
	}
	else{
		for (int i = 0; i < length-1; i++) //traverse until one position before the end (where new node is going to be)
		{
			help = help->link; //traverse help to position before where node is being added
		}
		help->link = temp; //make help->Link point to the new node
	}
	
	length++; //increment length
}

void LinkedList::insertbeginning(int item)
{
	cout << "Inserting: " << item << " in beginning" << endl;
	//create new node and set info
	
	nodeType *temp = new nodeType;
	temp->info = item;
	temp->link = NULL;

	if (islistEmpty()) { //make first point to the only node created
		front = temp;
	}
	else { 
		temp->link = front; //make new node's link point to current first node
		front = temp; // make front point to the new node
	}

	length++; //increment size
}

void LinkedList::insertlast(int item)
{
	cout << "Inserting: " << item << " at the end" << endl;
	nodeType *temp = new nodeType;
	temp->info = item;
	temp->link = NULL;

	if (islistEmpty()) { //setting first to point to only node
		front = temp;
	}

	else {

	current = front; //set current to beginning

	while (current->link != NULL) { //make sure current is one position node before end
		current = current->link;
	}
		current->link = temp; //make current->link point to new created ndoe
	}

	length++; //increment newNode
}

void LinkedList::deletenode(int position)
{
	if (islistEmpty() || position > length || position <= 0) {
		cout << "LIST DOESN'T EXIST HERE" << endl;
		assert(!position > length);
		assert(!islistEmpty());
		assert(!position <= 0);
	}

	cout << "Deleting position: " << position << endl;
	nodeType *trash; //pointer to be deleted 
	current = front; //set current to beginning

	if(position == 1){
		trash = front;
		front = front->link;
	}
	else {
		for (int i = 0; i < position - 2; i++) //make sure loop ends two node (b/c first element is 0) before what needs to be deleted
		{
			current = current->link; //traverse
		}
		trash = current->link; //make trash point to node that needs to be deleted
		current->link = trash->link; //update current->links position to point to node after the one thats going to be deleted
	}

	delete trash; //deallocate memory
	length--; //decrement list length by one
}


