

#include <iostream>
#include "binaryTree.h"
using namespace std;


int main() {

	binaryTree tree;

	//insert nodes
	tree.insertNode(15);
	tree.insertNode(9);
	tree.insertNode(10);
	tree.insertNode(12);

	//display traversal
	tree.inorderTraversal();

	cout << endl;


	system("pause");
	return 0;
}