#pragma once


//node
struct nodeType {

	nodeType* leftLink;
	nodeType* rightLink;
	int info;
};


class binaryTree
{
public:
	//constructor
	binaryTree();

	//destructor
	~binaryTree();

	//insert node
	void insertNode(int item);

	//delete tree
	void deleteTree();

	//copy tree
	void copyTree(const binaryTree& otherTree);

	//check if tree is empty
	bool isEmpty();

	//Inorder Traversal
	void inorderTraversal();

	//Preorder Traversal
	void preOrderTraversal();

	//Postorder traversal
	void postOrderTraversal();

	//overload assignment operator
	binaryTree operator=(const binaryTree& otherTree);


private:

	//pointer to root
	nodeType* root;
	//number of nodes
	int count;

	//helper method to pass private member root
	void insert(nodeType* root, int item);


};

