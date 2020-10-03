#include "binaryTreeType.h"

bool binaryTreeType::isEmpty() const
{
	return (root == nullptr);
}

binaryTreeType::binaryTreeType()
{
	root = nullptr;
}

void binaryTreeType::inorderTraversal() const
{
	inorder(root);
}

void binaryTreeType::preorderTraversal() const
{
	preorder(root);
}

void binaryTreeType::postorderTraversal() const
{
	postorder(root);
}

void binaryTreeType::inorder
(nodeType *p) const
{
	if (p != nullptr)
	{
		inorder(p->lLink);
		cout << p->info << " ";
		inorder(p->rLink);
	}
}

void binaryTreeType::preorder
(nodeType *p) const
{
	if (p != nullptr)
	{
		cout << p->info << " ";
		preorder(p->lLink);
		preorder(p->rLink);
	}
}

void binaryTreeType::postorder
(nodeType *p) const
{
	if (p != nullptr)
	{
		postorder(p->lLink);
		postorder(p->rLink);
		cout << p->info << " ";
	}
}

int binaryTreeType::height
(nodeType *p) const
{
	if (p == nullptr)
		return 0;
	else
		return 1 + max(height(p->lLink), height(p->rLink));
}

int binaryTreeType::max(int x, int y) const
{
	if (x >= y)
		return x;
	else
		return y;
}

int binaryTreeType::nodeCount(nodeType* p) const
{
	//create static counter variable
	static int count = 0;

	//traverse the list
	if (p != nullptr)
	{
		nodeCount(p->lLink);
		nodeCount(p->rLink);

		//incremenent static variable by one
		count++;
	}

	return count;
}

void binaryTreeType::copyTree
(nodeType* &copiedTreeRoot,
	nodeType* otherTreeRoot)
{
	if (otherTreeRoot == nullptr)
		copiedTreeRoot = nullptr;
	else
	{
		copiedTreeRoot = new nodeType;
		copiedTreeRoot->info = otherTreeRoot->info;
		copyTree(copiedTreeRoot->lLink, otherTreeRoot->lLink);
		copyTree(copiedTreeRoot->rLink, otherTreeRoot->rLink);
	}
}


void binaryTreeType::destroy(nodeType* &p)
{
	if (p != nullptr)
	{
		destroy(p->lLink);
		destroy(p->rLink);
		delete p;
		p = nullptr;
	}
}

void binaryTreeType::destroyTree()
{
	destroy(root);
}

binaryTreeType::binaryTreeType
(const binaryTreeType& otherTree)
{
	if (otherTree.root == nullptr) //otherTree is empty
		root = nullptr;
	else
		copyTree(root, otherTree.root);
}

binaryTreeType::~binaryTreeType()
{
	destroy(root);
}

const binaryTreeType& binaryTreeType::
operator=(const binaryTreeType& otherTree)
{
	if (this != &otherTree) //avoid self-copy
	{
		if (root != nullptr) //if the binary tree is not empty,
		//destroy the binary tree
			destroy(root);

		if (otherTree.root == nullptr) //otherTree is empty
			root = nullptr;
		else
			copyTree(root, otherTree.root);
	}//end else
	return *this;
}

void binaryTreeType::numberOfNode()
{
	cout << "Number of nodes: " <<  nodeCount(root);
}

void binaryTreeType::insert
(const int& insertItem)
{
	nodeType *current; //pointer to traverse the tree
	nodeType *trailCurrent; //pointer behind current
	nodeType *newNode; //pointer to create the node

	//create new Node
	newNode = new nodeType;
	newNode->info = insertItem;
	newNode->lLink = nullptr;
	newNode->rLink = nullptr;

	if (root == nullptr)
		root = newNode;
	else
	{
		//traverse list
		current = root;
		//variable to set data in node
		trailCurrent = current;
		while (current != nullptr)
		{
			//variable to set data in node
			trailCurrent = current;
			if (current->info > insertItem)
				//left subtree
				current = current->lLink;
			else
				//right subtree
				current = current->rLink;
		}

		//set data in node
		if (trailCurrent->info > insertItem)
			trailCurrent->lLink = newNode;
		else
			trailCurrent->rLink = newNode;
	}
}
