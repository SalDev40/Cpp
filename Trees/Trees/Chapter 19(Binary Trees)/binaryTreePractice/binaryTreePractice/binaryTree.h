#pragma once
#include <iostream>
using namespace std;

struct nodeType {
	int info;
	nodeType* lLink; //link to left node
	nodeType* rLink; //link to right node

};

class binaryTree
{
public:
	//constructor
	binaryTree();

	//copy constructor
	binaryTree(const binaryTree &);

	//destructor
	~binaryTree();

	//insert node
	void insertNode(int);

	//delete node
	void deleteNode(int);

	//Inorder Traversal
	void inorderTraversal();

	//Preorder Traversal
	void preOrderTraversal();

	//Postorder traversal
	void postOrderTraversal();


	//overload assignment operator
	const binaryTree& operator=(const binaryTree &);

	//check if tree is empty
	bool isEmpty() const;



private:
	nodeType* root; //hold address of root

	//inorder traversal
	void inorder(nodeType *) const;

	//preorder traversal
	void preorder(nodeType *) const;

	//postorder traversal
	void postorder(nodeType *) const;

	//copy tree
	void copyTree(nodeType* , nodeType*);


};

