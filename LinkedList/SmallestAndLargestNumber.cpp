#include <iostream>
using namespace std;

struct Node
{
    Node* link;
    int data;
};

Node* getNode(int data)
{
    Node* newNode = new Node();
    newNode->link = NULL;
    newNode->data = data;
    return newNode;
}
void smallestandBiggestNumber(Node* node)
{
    if (node == NULL) return;
    int smallNumber = 0;
    int largeNumber = 0;
    smallNumber = node->data;//Assume that the first Node Data is Smaller
    largeNumber = node->data;//Assume that the first node data is Larger
    while (node != NULL)
    {
        //smallNumber = node->data;
        if (smallNumber > node->data)//Compare the First node data with the second node data
        {
            smallNumber = node->data;
        }
        if (largeNumber < node->data)//Compare the First node data with the second node data
        {
            largeNumber = node->data;
        }
        node = node->link;
    }
    cout << "\n\nSmaller Number is " << smallNumber << endl;
    cout << "\n\nLarge Number is " << largeNumber << endl;
}
void display(Node* head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
}

int main()
{
    Node* head = NULL;
    head = getNode(10);
    head->link = getNode(320);
    head->link->link = getNode(230);
    head->link->link->link = getNode(40);
    head->link->link->link->link = getNode(70);
    head->link->link->link->link->link = getNode(170);
    head->link->link->link->link->link->link = getNode(190);
    head->link->link->link->link->link->link->link = getNode(199);
    cout << "Linked List Data: "
    display(head);
    smallestandBiggestNumber(head);
}
