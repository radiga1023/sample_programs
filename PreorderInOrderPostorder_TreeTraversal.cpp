#include <iostream>
using namespace std;

struct Node
{
    Node* left;
    char data;
    Node* right;
};

void preorder(Node* root)
{
    if (root == NULL) return;
    cout << (char)root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << (char)root->data << " ";
}

void inorder(Node* root)
{
    if (root == NULL) return;
    inorder(root->left);
    cout << (char)root->data << " ";
    inorder(root->right);
}

Node* insert(Node* root, char data)
{
    if (root == NULL)
    {
        root = new Node;
        root->left = root->right = NULL;
        root->data = data;
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
int main()
{
    Node* root = NULL;
    root = insert(root, 'A');
    root = insert(root, 'B');
    root = insert(root, 'C');
    root = insert(root, 'M');
    root = insert(root, 'Q');
    root = insert(root, 'N');
    root = insert(root, 'E');
    root = insert(root, 'Z');
    root = insert(root, 'X');
    root = insert(root, 'P');

    cout << "Pre-order of the Linked List " << endl;
    preorder(root);
    cout << "\nIn-order of the Linked List " << endl;
    inorder(root);
    cout << "\nPost-order of the Linked List " << endl;
    postorder(root);
    return 0;
}


/*
Output:

Pre-order of the Linked List
A B C M E Q N P Z X
In-order of the Linked List
A B C E M N P Q X Z
Post-order of the Linked List
E P N X Z Q M C B A
*/
