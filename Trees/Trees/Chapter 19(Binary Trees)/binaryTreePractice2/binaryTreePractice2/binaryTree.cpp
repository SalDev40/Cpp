#include "binaryTree.h"


binaryTree::binaryTree()
{
	root = nullptr;
	count = 0;
}


binaryTree::~binaryTree()
{

}

void binaryTree::insertNode(int item)
{
	//call helper method
	insert(root, item);
}

bool binaryTree::isEmpty()
{
	return (root == nullptr);
}

void binaryTree::insert(nodeType * root, int item)
{
	//create node and initialize it
	nodeType* newNode = new nodeType();
	newNode->info = item;
	newNode->leftLink = newNode->rightLink = nullptr;


	//check if list is empty
	if (isEmpty()) {
		//insert in first position
		root = newNode;

		//increment count
		count++;
	}
	else if (root == nullptr) {
		return;
	}
	else {
		//check if item is < or > then current node
		nodeType* current = root;
		if (item < current->info) {
			current->leftLink = newNode;
		}

	}
}
