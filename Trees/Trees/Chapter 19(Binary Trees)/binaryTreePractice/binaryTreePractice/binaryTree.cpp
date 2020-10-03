#include "binaryTree.h"

binaryTree::binaryTree()
{
}

binaryTree::binaryTree(const binaryTree &otherTree)
{
	//check if tree copying from is empty
	if (otherTree.isEmpty())
		root = NULL;

	//set pointer to tree copying from
	nodeType *originalTree = otherTree.root;
	//create new Node
	nodeType *newNode = new nodeType;
	newNode->info = originalTree->info;
	newNode->lLink = newNode->rLink = NULL;

	//pointer to list being copied to
	nodeType *newList = newNode;

	//traverse list
	while (originalTree != NULL)
	{
		originalTree = originalTree->lLink;
	}
}

binaryTree::~binaryTree()
{
}

//Insert node into tree
void binaryTree::insertNode(int item)
{
	//create new node
	nodeType *newNode = new nodeType;
	newNode->info = item;
	newNode->lLink = newNode->rLink = NULL;

	//check if tree is empty
	if (isEmpty())
	{
		//set root node
		root = newNode;
	}
	else
	{
		nodeType *current = root;		  //pointer to traverse list
		nodeType *trailCurrent = current; //pointer to node previous of current

		//traverse list
		while (current != NULL)
		{

			trailCurrent = current;

			//traverse left or right direction based on item
			if (current->info > item)
			{
				//traverse left subtree
				current = current->lLink;
			}
			else if (current->info < item)
			{
				//right subtree
				current = current->rLink;
			}
		}

		//post traversal
		//check to insert node on right link or left link
		if (trailCurrent->info > item)
		{
			trailCurrent->lLink = newNode;
		}
		else if (trailCurrent->info < item)
		{
			trailCurrent->rLink = newNode;
		}
	}
}

void binaryTree::inorderTraversal()
{
	//call inorder function passing it root address
	inorder(root);
}

void binaryTree::preOrderTraversal()
{
	preorder(root);
}

void binaryTree::postOrderTraversal()
{
	postorder(root);
}

bool binaryTree::isEmpty() const
{
	return (root == NULL);
}

void binaryTree::inorder(nodeType *p) const
{
	//left node -> print -> right node
	if (p != NULL)
	{
		inorder(p->lLink);
		cout << p->info << " ";
		inorder(p->rLink);
	}
}
void binaryTree::preorder(nodeType *p) const
{
	// print -> left node ->  right node
	if (p != NULL)
	{
		cout << p->info << " ";
		inorder(p->lLink);
		inorder(p->rLink);
	}
}
void binaryTree::postorder(nodeType *p) const
{
	//left node -> right node -> print
	if (p != NULL)
	{
		inorder(p->lLink);
		inorder(p->rLink);
		cout << p->info << " ";
	}
}
