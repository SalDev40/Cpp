#include "unorderedArrayListType.h"
#include "arrayListType.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



void unorderedArrayListType::insertAt(int location, int insertItem) {
	if (location < 0 || location > maxSize) {
		cout << "The position of the item to be inserted is out of range" << endl;
	}
	else if (length >= maxSize) {
		cout << "Cant insert in a full list" << endl;
	}
	else {
		for (int i = length; i > location; i--) {
			list[i] = list[i - 1];

			list[location] = insertItem;
			length++;
		}
	}

}
void unorderedArrayListType::insertEnd(int insertItem) {
	if (length >= maxSize) {
	cout << "Cant insert in a full list" << endl;
	}
	else {
		list[length] = insertItem;
		length++;
	}

}
void unorderedArrayListType::replaceAt(int location, int repItem) {

	if (location < 0 || location >= length) {
		cout << "The locatoin of the item to be replaced is out of range" << endl;
	}
	else {
		list[location] = repItem;
	}
}
int unorderedArrayListType::seqSearch(int searchitem) const {
	int loc;
	bool found = false;
	loc = 0;

	while (loc < length && !found) {
		if (list[loc] == searchitem) {
			found = true;
		}
		else {
			loc++;
		}
	}

	if (found) {
		return loc;
	}
	else {
		return -1;
	}
	
}
void unorderedArrayListType::remove(int removeItem){
	int loc;
	if (length == 0) {
		cout << "Cannot delete from empty list" << endl;
	}
	else {
		loc = seqSearch(removeItem);
		if (loc != 1) {
			removeAt(loc);
		}
		else {
			cout << "The item to be deleted is not in the list" << endl;
		}
	}

}

unorderedArrayListType::unorderedArrayListType(int size = 100)
	:arrayListType(size)
{

}

