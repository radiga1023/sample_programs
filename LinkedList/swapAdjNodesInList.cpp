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
//Approach 1- Easy
/*
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapAdjNodes(Node* head)
{
    if (head == NULL) return;
    Node* temp = head;
    while ((temp != NULL) && (temp->link) != NULL)
    {
        swap(&temp->data, &temp->link->data);//Parse the current and next node data 
        temp = temp->link->link;//Increment by 2 steps
    }
}
*/

//Approach 2
Node* swapAdjNodes(Node* head)
{
    if (head == NULL)
        return head;

    Node* current = head->link->link;
    Node* prev = head;
    head = head->link;
    head->link = prev;

   // cout << head->data << endl;
    //cout << head->link->data << endl;

    while (current != NULL && current->link != NULL)
    {
        prev->link = current->link;
        prev = current;
        Node* next = current->link->link;
        current->link->link = current;
        current = next;
    }
    prev->link = current;
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
    head = swapAdjNodes(head);
    cout << "\nLinked List after Swapping " << endl;
    displayList(head);
    return 0;
}

/*
Output:
Linked List before Swapping
10 20 30 40
Linked List after Swapping
20 10 40 30 
*/
