#include <iostream>
#pragma once
class AVL
{

private:
    struct Node
    {
        //variables
        int data;
        Node *left;
        Node *right;
        Node *parent;
    };

    //variables
    Node *root;
    int count;

    //core implementation
    void InsertNode(Node *&parent, Node *&newNode);
    void DeleteNode(Node *parent, const int &item);
    void DeleteTree(Node *root);
    void Rebalance(Node *node);

    //rotations
    Node *LeftRotate(Node *rotate);
    Node *RightRotate(Node *rotate);
    Node *LeftRightRotate(Node *rotate);
    Node *RightLeftRotate(Node *rotate);

    //utility/helper
    bool IsEmpty() const;
    void CheckBalance(Node *newNode);
    static void InorderTraversal(Node *root);
    static int GetHeight(Node *node) ;
    static Node *CreateNode(const int &item);

public:
    //constructors/destructor
    AVL();
    AVL(const AVL &otherHeap);
    AVL(AVL &&otherHeap);
    ~AVL();

    //wrapper
    void Inorder() const;
    void Insert(const int &item);
    void Delete(const int &item);
};
