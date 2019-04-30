#include <iostream>
using namespace std;

struct Node
{
    Node* left;
    int data;
    Node* right;
};

Node* root = NULL;

Node* getNode(int data)
{
        Node* newNode = new Node();
        newNode->left = newNode->right = NULL;
        newNode->data = data;
        root = newNode;
        return root;
}

bool checkForListMirror(Node* Node1, Node* Node2)
{
    if (Node1 == NULL && Node2 == NULL)
        return true; //both are empty now
    /*If Any one of the Tree's Root Node is Null, then return from here as tree's are
    not mirror
    */
    if (Node1 == NULL || Node2 == NULL)
        return false;
    /*
    First Check the Root Node Data, then Check Left Tree's left Node vs Right Tree's Right Node
    Then check Left Tree's Right Node vs Left Tree's Left Node irecursively
    */
    return ((Node1->data == Node2->data) &&
        checkForListMirror(Node1->left, Node2->right) &&
        checkForListMirror(Node1->right, Node2->left));
}


int main()
{
    Node* Node1 = NULL;
    Node* Node2 = NULL;
    Node1 = getNode(10);
    Node1->left = getNode(8);
    Node1->right = getNode(9);
    Node1->right->right = getNode(7);

    Node2 = getNode(10);
    Node2->right = getNode(8);
    Node2->left = getNode(9);
    Node2->left->left = getNode(7);
    //Node2->left->left = getNode(9);

    if (checkForListMirror(Node1, Node2))
        cout << "Tree1 is a Mirror of Tree2" << endl;
    else
        cout << "Tree1 is not a Mirror of Tree2" << endl;

    return 0;
}

