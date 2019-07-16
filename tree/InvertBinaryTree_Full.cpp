#include <iostream>
#include <stack>
using namespace std;

class Node
{
  public:
  Node* left;
  Node* right;
  int value;
};

Node* insertNode(int value)
{
    Node* newNode = new Node;
    newNode->left =  newNode->right = NULL;
    newNode->value = value;
    return newNode;
}
void printTree(Node* root)
{
    if (root == NULL) return;
    printTree(root->left);
    printTree(root->right);
    cout << (unsigned int)root->value  << " ";
}

Node* invertBinaryTree(Node* root)
{
    if (root == NULL) return NULL;
    Node* left = invertBinaryTree(root->left);
    Node* right = invertBinaryTree(root->right);
    root->left = right;
    root->right = left;
    return root;
}



int main()
{
    Node* root = insertNode(4);
    root->left = insertNode(7);
    root->left->left = insertNode(9);
    root->left->right = insertNode(6);
    root->right = insertNode(2);
    root->right->left = insertNode(3);
    root->right->right = insertNode(1);
    printTree(root);
    invertBinaryTree(root);
    cout << endl;
    printTree(root);
    return 0;
}
