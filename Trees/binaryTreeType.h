#include <iostream>
using namespace std;


struct nodeType
{
	int info;
	nodeType *lLink;
	nodeType *rLink;
};

class binaryTreeType {
public:
	const binaryTreeType& operator=
		(const binaryTreeType&);
	//Overload the assignment operator.
	bool isEmpty() const;
	//Function to determine whether the binary tree is empty.
	void inorderTraversal() const;
	//Function to do an inorder traversal of the binary tree.
	void preorderTraversal() const;
	//Function to do a preorder traversal of the binary tree.
	void postorderTraversal() const;
	//Function to do a postorder traversal of the binary tree.
	void destroyTree();
	//Function to destroy the binary tree.
	//tree.

	void numberOfNode();
	//display number of nodes

	 void insert(const int& insertItem);
	//Function to insert insertItem in the binary tree.
	 void deleteNode(const int& deleteItem);
	//Function to delete deleteItem from the binary tree.

	int nodeCount(nodeType *p) const;
	//Function to determine the number of nodes in
	//the binary tree to which p points.

	binaryTreeType(const binaryTreeType& otherTree);
	//Copy constructor
	binaryTreeType();
	//Default constructor
	~binaryTreeType();
	//Destructor
protected:
	nodeType *root;
private:
	void copyTree(nodeType* &copiedTreeRoot,
		nodeType* otherTreeRoot);
	//Makes a copy of the binary tree to which
	//otherTreeRoot points.
	//Postcondition: The pointer copiedTreeRoot points to
	// the root of the copied binary tree.

	void destroy(nodeType* &p);
	//Function to destroy the binary tree to which p points.
	//Postcondition: Memory space occupied by each node, in
	// the binary tree to which p points, is
	// deallocated.
	// p = nullptr;

	void inorder(nodeType *p) const;
	//Function to do an inorder traversal of the binary
	//tree to which p points.
	//Postcondition: Nodes of the binary tree, to which p
	// points, are printed in inorder sequence.

	void preorder(nodeType *p) const;
	//Function to do a preorder traversal of the binary
	//tree to which p points.
	//Postcondition: Nodes of the binary tree, to which p
	// points, are printed in preorder
	// sequence.

	void postorder(nodeType *p) const;
	//Function to do a postorder traversal of the binary
	//tree to which p points.
	//Postcondition: Nodes of the binary tree, to which p
	// points, are printed in postorder
	// sequence.

	int height(nodeType *p) const;
	//Function to determine the height of the binary tree
	//to which p points.
	//Postcondition: Height of the binary tree to which
	// p points is returned.

	int max(int x, int y) const;
	//Function to determine the larger of x and y.
	//Postcondition: Returns the larger of x and y.


};