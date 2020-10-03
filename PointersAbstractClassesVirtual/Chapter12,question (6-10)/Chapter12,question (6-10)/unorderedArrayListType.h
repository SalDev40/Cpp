#pragma once
#include "arrayListType.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class unorderedArrayListType:public arrayListType
{
public:

	void insertAt(int location, int insertItem);
	void insertEnd(int insertItem);
	void replaceAt(int location, int repItem);
	int seqSearch(int searchitem) const;
	void remove(int removeItem);

	unorderedArrayListType( int size = 100);
	
};

