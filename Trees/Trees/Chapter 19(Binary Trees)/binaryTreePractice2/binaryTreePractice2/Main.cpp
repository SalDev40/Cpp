#include <iostream>

struct newNode
{
    int data;
    newNode *left;
    newNode *right;
};

int count = 0;

newNode *createNode(int data)
{
    //create new node
    newNode *Node = new newNode();
    Node->data = data;
    return Node;
}

newNode *insert(newNode *root, int data)
{
    //if is  empty
    if (root == nullptr)
    {
        root = createNode(data);
    }
    else if (root->data <= data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    count++;
    return root;
}

void inorder(newNode *p)
{
    //left node -> print -> right node
    if (p != NULL)
    {
        inorder(p->left);
        std::cout << p->data << "  ";
        inorder(p->right);
    }
}
int main()
{
    newNode *root = NULL;

    root = insert(root, 12);
    root = insert(root, 38);
    root = insert(root, 25);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 8);
    root = insert(root, 55);
    root = insert(root, 37);


    inorder(root);
    std::cout << std::endl;
    return 0;
}
