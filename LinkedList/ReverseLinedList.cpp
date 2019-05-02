#include <iostream>
using namespace std;

struct Node
{
    Node* link;
    int data;
};

Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->link = NULL;
    return newNode;
}

void displayList(Node* head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
}

Node* reverseList(Node* head)
{
    Node* current = head;
    Node* prev = NULL, *next = NULL;
    while (current != NULL)
    {
        //Store the Next Node
        next = current->link;
        //Reverse the current node pointer
        current->link = prev;
        //Move pointer one position ahead
        prev = current;
        current = next;
    }
    //Make the last node as head
    head = prev;
    return head;
}

int main()
{
    Node* head = NULL;
    head = createNode(10);
    head->link = createNode(20);
    head->link->link = createNode(30);
    head->link->link->link = createNode(40);
    cout << "\nLinked List before Swapping " << endl;
    displayList(head);
    head = reverseList(head);
    cout << "\nLinked List after Swapping " << endl;
    displayList(head);
    return 0;
}
