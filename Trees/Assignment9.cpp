

#include <iostream>
#include "binaryTreeType.h"

using namespace std;


int main() {

	binaryTreeType tree;

	//insert items into tree
	tree.insert(5);
	tree.insert(7);
	tree.insert(9);
	tree.insert(10);
	tree.insert(23);
	tree.insert(23);
	tree.insert(23);
	tree.insert(23); //item number 8

	//display number of items in tree
	tree.numberOfNode();

	cout << endl;



	system("pause");
	return 0;


}