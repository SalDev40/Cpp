#include "MaxHeap.h"
#include <algorithm>
//********************************
//Constructors/Destructor
//********************************

Heap::Heap()
{
    root = nullptr;
    count = 0;
}
Heap::Heap(const Heap &otherHeap)
{
    if (!IsEmpty())
        DeleteTree(root);
    CopyHeap(root, otherHeap.root);
}
Heap::Heap(Heap &&otherHeap)
{
    root = otherHeap.root;
    count = otherHeap.count;
    otherHeap.root = nullptr;
    otherHeap.count = 0;
}
Heap::~Heap() { DeleteTree(root); }

//********************************
//utility/helper
//********************************

bool Heap::IsEmpty() const { return count == 0; }
void Heap::InorderTraversal(Node *root)
{
    if (root != nullptr)
    {
        InorderTraversal(root->left);
        std::cout << root->data << std::endl;
        InorderTraversal(root->right);
    }
}
int Heap::GetHeight(Node *node)
{
    if (node == nullptr)
        return -1;
    else
    {
        return std::max(GetHeight(node->left), GetHeight(node->right)) + 1;
    }
}
Heap::Node *Heap::CreateNode(const int &item)
{
    Node *newNode = new Node;
    newNode->data = item;
    newNode->left = newNode->right = newNode->parent = nullptr;
}

void Heap::CopyHeap(Node *node, Node *otherHeap)
{
    if (otherHeap == nullptr)
    {
        root == nullptr;
    }
    else
    {
        Node *node = CreateNode(otherHeap->data);
        CopyHeap(node->left, otherHeap->left);
        CopyHeap(node->right, otherHeap->right);
    }
}
//********************************
//wrapper
//********************************

void Heap::Inorder() const { InorderTraversal(root); }
void Heap::Insert(const int &item)
{
    Node *newNode = CreateNode(item);
    if (root == nullptr)
    {
        root = newNode;
    }
    else
    {
        InsertNode(root, newNode);
    }
}
void Heap::Delete(const int &item) { DeleteNode(root, item); }

//********************************
//core implementation
//********************************

void Heap::InsertNode(Node *&parent, Node *&newNode)
{
    if (newNode->data > parent->data)
    {
        if (parent->right = nullptr)
        {
            parent->right = newNode;
            newNode->parent = parent;
        }
        else
        {

            InsertNode(parent->right, newNode);
        }
    }
    else
    {
        if (parent->left = nullptr)
        {
            parent->left = newNode;
            newNode->parent = parent;
        }
        else
        {

            InsertNode(parent->left, newNode);
        }
    }
    //check if tree is complete binary tree after insertion
    CheckComplete(newNode);
}
void Heap::DeleteTree(Node *root)
{
    if (root != nullptr)
    {
        DeleteTree(root->left);
        DeleteTree(root->right);
        delete root;
    }
}

//TODO:
void Heap::DeleteNode(Node *node, const int &item) {}
void Heap::CheckComplete(Node *newNode) {}
void Heap::Complete(Node *node) {}
void Heap::Heapify(Node *node)
{
    if (node->left->data > node->data || node->right->data > node->data)
    {
        //swap with left node
        if (node->left->data > node->right->data)
        {
            int temp = node->data;
            node->data = node->left->data;
            node->left->data = temp;
        }
        else
        {
            //swap with right node
            int temp = node->data;
            node->data = node->right->data;
            node->right->data = temp;
        }
    }
    //recursively check parents
    if (node->parent != nullptr)
        Heapify(node->parent);
}
void Heap::HeapSort(Node *root) {}