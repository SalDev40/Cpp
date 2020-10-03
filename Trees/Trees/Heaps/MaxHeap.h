#include <iostream>
#pragma once
class Heap
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
    void DeleteNode(Node *node, const int &item);
    void DeleteTree(Node *root);
    void CheckComplete(Node *newNode);
    void Complete(Node *node);
    void Heapify(Node *node);
    void HeapSort(Node *root);

    //utility/helper
    bool IsEmpty() const;
    void CopyHeap(Node *node, Node* otherHeap);
    static void InorderTraversal(Node *root);
    static int GetHeight(Node *node);
    static Node *CreateNode(const int &item);

public:
    //constructors/destructor
    Heap();
    Heap(const Heap &otherHeap);
    Heap(Heap &&otherHeap);
    ~Heap();

    //wrapper
    void Inorder() const;
    void Insert(const int &item);
    void Delete(const int &item);
};
