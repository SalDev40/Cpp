#include "orderedLinkedList.h"
#include "linkedListType.h"
#include <cassert>
#include <iostream>
using namespace std;

bool orderedLinkedList::search(const int& searchItem) const
{
	//flag variable
	bool found = false;

	//check if list is empty
	if (isEmptyList()) {
		assert(!isEmptyList());
	}
	else {
		NodeType* current;
		current = head;
		while (current != NULL && !found) {
			//break from loop if item found or current node is greater than item to be found
			if (current->data >= searchItem)
				found = true;
			else
				current = current->link;
		}

		//check if we broke out of loop
		if (found) {
			//check if current node is item to be found
			found = (current->data == searchItem);
		}
	}
	return found;
}

void orderedLinkedList::insertFirst(const int& newItem)
{
	insert(newItem);
}

void orderedLinkedList::insertLast(const int& newItem)
{
	insert(newItem);
}

void orderedLinkedList::insert(const int& newItem)
{
	//create new node
	NodeType* newNode = new NodeType;
	NodeType* current = head;
	NodeType* trailcurrent = current;
	newNode->data = newItem;

	//insert beginning
	if (isEmptyList() || newItem < head->data) {
		cout << "Inserting: " << newItem << " in the beginning of the List " << endl;
		newNode->link = head;
		head = newNode;
	}
	else {

		while (current->link != NULL && current->data < newItem && current->data != newItem) {
			trailcurrent = current;
			current = current->link;
		}
		if (newItem > current->data) {
			cout << "Inserting: " << newItem << " in the End of the List " << endl;
			newNode->link = NULL;
			current->link = newNode;
		}
		else if ((trailcurrent->data < newItem && newItem < current->data) || (current->data = newItem)) {
			cout << "Inserting: " << newItem << endl;
			newNode->link = current;
			trailcurrent->link = newNode;
		}

	}
	count++;
}

void orderedLinkedList::deleteNode(const int& deleteItem)
{
	//flag variable
	bool found = false;

	NodeType* trash;
	NodeType* current = head;

	//check is list is empty
	if (isEmptyList()) {
		assert(!isEmptyList());
	}
	else {
		//check if to delete first node
		if (head->data == deleteItem) {
			cout << "Deleting item: " << deleteItem << endl;
			trash = head;
			head = head->link;
			delete trash;
			count--;
		}
		else {
			cout << "Deleting item: " << deleteItem << endl;
			NodeType* current = new NodeType;
			current = head;
			while (current != NULL && !found && current->data < deleteItem) {
				//if item is found break out of loop
				if (current->link->data == deleteItem) {
					found = true;
					trash = current->link;
					//move link to next node
					current->link = trash->link;
					delete trash;
					count--;
				}
				else {
					current = current->link;
				}

			}
			//check if item was found
			if (!found) {
				assert(found);
			}
		}
	}
}
