#include <iostream>
using namespace std;

//Create a BST Node
struct BstNode
{
    BstNode* left;
    int data;
    BstNode* right;
};

//Create a Root Node
BstNode* root;

BstNode* getNode( int data)
{
    BstNode* newNode = new BstNode;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
//Insert data into the Node
BstNode* insert(BstNode* root, int data)
{
    if (root == NULL)
    {
        root = getNode(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

//Search an element in the Tree
bool search(BstNode* root, int data)
{
    if (root == NULL)
        return false;
    else if (root->data == data)
    {
        return true;
    }
    else if (data <= root->data)
    {
        return search(root->left, data);
    }
    else if (data > root->data)
    {
        return search(root->right, data);
    }
}

int main()
{
    BstNode* root = NULL;
    root = insert(root, 35);
    root = insert(root, 15);
    root = insert(root, 55);
    root = insert(root, 35);
    root = insert(root, 115);
    root = insert(root, 25);
    //Search for umber 33
    cout << "Number to search " << 115 << "  is " << search(root, 115) << endl;
    cout << "Number to search " << 35 << "  is " << search(root, 35) << endl;
    return 0;
}
