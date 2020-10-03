#include "avl.h"
#include <algorithm>
//*************************************************************
//constructors/destructor
//*************************************************************
AVL::AVL()
{
    count = 0;
    root = nullptr;
}
AVL::AVL(const AVL &otherHeap)
{
}
AVL::AVL(AVL &&otherHeap)
{
    root = otherHeap.root;
    count = otherHeap.count;
    otherHeap.count = 0;
    otherHeap.root = nullptr;
}
AVL::~AVL() {
    DeleteTree(root);
}

//*************************************************************
//wrapper functions
//*************************************************************
void AVL::Insert(const int &item)
{
    Node *newNode = CreateNode(item);
    //insert first node
    if (root == nullptr)
    {
        root = newNode;
    }
    else
    {
        InsertNode(root, newNode);
    }
}
void AVL::Delete(const int &item) { DeleteNode(root, item); }
void AVL::Inorder() const  { InorderTraversal(root); }

//*************************************************************
//core implementation
//*************************************************************
void AVL::InsertNode(Node *&parent, Node *&newNode)
{
    //insert in right
    if (newNode->data > parent->data)
    {
        if (parent->right == nullptr)
        {
            parent->right = newNode;
            newNode->parent = parent;
            // std::cout << "parent for right: " << parent << std::endl;
            // std::cout << newNode->parent << std::endl;
            // std::cout << "parent: " << parent->data << std::endl;
        }
        else
        {
            InsertNode(parent->right, newNode);
        }
    }
    else
    {
        //insert in left
        if (parent->left == nullptr)
        {
            parent->left = newNode;
            newNode->parent = parent;
            //std::cout << "parent for left: " << parent << std::endl;
            //std::cout << newNode->parent << std::endl;
            // std::cout << "parent: " << parent->data << std::endl;
        }
        else
        {
            InsertNode(parent->left, newNode);
        }
    }
    CheckBalance(newNode);
    count++;
}
void AVL::DeleteNode(Node *parent, const int &item) {}
void AVL::Rebalance(Node *node)
{

    //check if left side is bigger
    if (GetHeight(node->left) - GetHeight(node->right) > 1)
    {
        if (GetHeight(node->left->left) > GetHeight(node->left->right))
        {
            node = RightRotate(node);
        }
        else
        {
            node = LeftRightRotate(node);
        }
    }
    else
    {
        //if right side is bigger
        if (GetHeight(node->right->right) > GetHeight(node->right->left))
        {
            node = LeftRotate(node);
        }
        else
        {
            node = RightLeftRotate(node);
        }
    }

    //update root
    if (node->parent == nullptr)
    {
        root = node;
    }
}

//*************************************************************
//rotations
//*************************************************************

AVL::Node *AVL::LeftRotate(Node *rotate)
{
    Node *temp = rotate->right;
    rotate->right = temp->left;
    temp->left = rotate;
    return temp;
}
AVL::Node *AVL::RightRotate(Node *rotate)
{
    Node *temp = rotate->left;
    rotate->left = temp->right;
    temp->right = rotate;
    return temp;
}
AVL::Node *AVL::RightLeftRotate(Node *rotate)
{
    rotate->right = RightRotate(rotate->right);
    return LeftRotate(rotate);
}
AVL::Node *AVL::LeftRightRotate(Node *rotate)
{
    rotate->left = LeftRotate(rotate->left);
    return RightRotate(rotate);
}

//*************************************************************
//utility/helper functions
//*************************************************************
bool AVL::IsEmpty() const { return count == 0; }
int AVL::GetHeight(Node *node) 
{
    if (node == nullptr)
        return -1;
    else
    {
        return std::max(GetHeight(node->left), GetHeight(node->right)) + 1;
    }
}
void AVL::CheckBalance(Node *node)
{
    //check if height betweeen right and left side is one
    if (
        (GetHeight(node->left) - GetHeight(node->right) > 1) ||
        (GetHeight(node->left) - GetHeight(node->right) < -1))
    {
        Rebalance(node);
    }
    //if were at root node
    if (node->parent == nullptr)
    {
        return;
    }
    else
    {
        //recurse backwards to parent of node
        CheckBalance(node->parent);
    }
}
void AVL::InorderTraversal(Node *root)
{
    if (root != nullptr)
    {
        InorderTraversal(root->left);
        std::cout << root->data << " ";
        InorderTraversal(root->right);
    }
}

AVL::Node *AVL::CreateNode(const int &item)
{
    Node *newNode = new Node();
    newNode->data = item;
    newNode->left = newNode->right = newNode->parent = nullptr;
    return newNode;
}

void AVL::DeleteTree(Node* root){
    if (root != nullptr)
    {
        DeleteTree(root->left);
        DeleteTree(root->right);
        delete root;
    }
}
