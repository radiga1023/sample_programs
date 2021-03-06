#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    char data;
    Node* left;
    Node* right;
};

void printInLevelOrder(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    std::queue<Node*> Q;
    Q.push(root);
    while (!Q.empty())
    {
        Node* current = Q.front();
        Q.pop();
        cout << current->data << " ";
        if (current->left != NULL)
            Q.push(current->left);
        if (current->right != NULL)
            Q.push(current->right);
    }
}

Node* insert(Node* root, char data)
{
    if (root == NULL)
    {
        root = new Node;
        root->data = data;
        root->left = root->right = NULL;
    }
    else if (data <= root->data)
        root->left = insert(root->left, data);
    else 
        root->right = insert(root->right, data);
    return root;
}
int main()
{

    Node* root = NULL;
    root = insert(root, 'M');
    root = insert(root, 'N');
    root = insert(root, 'O');
    root = insert(root, 'P');
    root = insert(root, 'R');
    root = insert(root, 'Q');
    root = insert(root, 'A');
    root = insert(root, 'B');
    root = insert(root, 'C');
    printInLevelOrder(root);
    return 0;
}
