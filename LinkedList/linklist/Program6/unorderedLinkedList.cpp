#include "unorderedLinkedList.h"
#include "linkedListType.h"
#include <iostream>
#include <cassert>
using namespace std;

bool unorderedLinkedList::search(const int & searchItem) const
{
	bool found = false; //flag
	if (isEmptyList()) { //check to see if list is empty
		cout << "LIST IS EMPTY" << endl;
		assert(!isEmptyList());
	}
	else {
		NodeType *current = head; //pointer to traverse list

		//loop until either list is empty or item is found
		while (current != NULL && !found) {
			if (current->data == searchItem) {
				found = true; 
			}
			else {
				current = current->link;
			}
		}
		return found; //return flag 
	}
}

void unorderedLinkedList::insertFirst(const int & newItem)
{
	cout << "Inserting: " << newItem << " in the beginning of the List " << endl;
	NodeType *newNode = new NodeType; //create newnode
	newNode->data = newItem;
	newNode->link = head;  //link new to point to current first node
	head = newNode; //make head pointer point to new node created making it the first node
	count++;
}

void unorderedLinkedList::insertLast(const int & newItem)
{

	if (isEmptyList()) {  //check to see if list is empty
		insertFirst(newItem);
	}
	else {
		cout << "Inserting: " << newItem << " in the End of the List " << endl;
		NodeType *newNode = new NodeType; //create new node
		newNode->data = newItem;
		newNode->link = NULL;
		NodeType *current = head; //pointer to traverse list

		//loop until last node is reached
		while (current->link != NULL) {
			current = current->link;
		}
		current->link = newNode; //point the current last node's link to new node created
		count++;
	}
}

void unorderedLinkedList::insertRandom(const int & newItem, const int & position)
{
	if (position > count + 1) { //if position item is being added at is greater than list size + 1
		cout << "LIST DOESN'T EXIST HERE!" << endl;
		assert(position < count + 1);
	}
	if (position == 1) { //if being added to first position
		insertFirst(newItem);
	}
	else {
		cout << "Inserting: " << newItem << " at Position: " << position << endl;
		//create new node
		NodeType *newNode = new NodeType; 
		newNode->data = newItem;
		NodeType *current = head; //pointer to traverse list

		//loop until two nodes before position node is being inserted in
			//two positions ahead because array index starts at 0
		for (int i = 0; i < position - 2; i++) {
			current = current->link;
		}
		newNode->link = current->link; //point new node link to node ahead of it
		current->link = newNode; //point link of node behind the new node, to point at new node
		count++;
	}
}

void unorderedLinkedList::deleteNode(const int & deleteItem)
{

	cout << "Deleting item: " << deleteItem << endl;
	bool found = false; //flag
	NodeType* trash; //pointer to deallocate memory
	if (isEmptyList()) { //check to see if list is empty
		cout << "LIST IS EMPTY" << endl;
		assert(!isEmptyList());
	}
	if (head->data == deleteItem) { //if node to be deleted is first node
		trash = head;
		head = head->link; //move head to second node
		delete trash; //deallocate memory
	}
	else {
		NodeType *current; //pointer to traverse list
		current = head;

		//loop until either list is empty or item is found
		while (current != NULL && !found) {
			if (current->link->data == deleteItem) {
				found = true;
				trash = current->link;
				current->link = trash->link;
				delete trash;
			}
			else {
				current = current->link;
			}
		}
		if (!found) { //if item isn't found
			cout << "Item isn't in list" << endl;
			assert(found);
		}
	}

	count--;
	
}
