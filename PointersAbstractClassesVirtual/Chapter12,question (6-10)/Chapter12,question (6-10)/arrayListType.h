#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class arrayListType
{
public:
	
	bool isEmpty() const;
	bool isFull() const;
	int listSize() const;
	int maxlistSize() const;
	void print()const;
	bool isItemAtEqual(int location, int item) const;
	virtual void insertAt(int location, int inseritem) = 0;
	virtual void insertEnd(int insertItem) = 0;
	void removeAt(int location);
	void retrieveAt(int location, int& retItem) const;
	virtual void replaceAt(int location, int repItem) = 0;
	void clearList();
	virtual int seqSearch(int searchItem) const = 0;
	virtual void remove(int removeItem) = 0;

	arrayListType(int size = 100);
	arrayListType(const arrayListType& otherList);
	~arrayListType();

protected:
	int *list;
	int length;
	int maxSize;
	

};

