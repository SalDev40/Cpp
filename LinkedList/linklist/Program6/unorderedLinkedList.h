#pragma once
#include "linkedListType.h"
#include <iostream>
using namespace std;


class unorderedLinkedList :public linkedListType
{
public:
	bool search(const int& searchItem) const;
	//if item is in list return true else return false
	void insertFirst(const int& newItem);
	//insert new item in beginning of list
	void insertLast(const int& newItem);
	//insert new item at the end of the list
	void insertRandom(const int& newItem, const int& position);
	//insert newItem at given position
	void deleteNode(const int& deleteItem);
	//remove an item from list, list must not be empty, item must be in list

};

