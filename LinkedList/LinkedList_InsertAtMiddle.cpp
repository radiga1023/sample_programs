#include <iostream>
using namespace std;

struct Node
{
    Node* link;
    int data;
};

Node* getNode(int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->link = NULL;
    return temp;
}

void insertNodeAtMid(Node** head_ref, int x)
{
    if (*head_ref == NULL)
        *head_ref = getNode(x);
    else
    {
        Node* temp = getNode(x);
        Node* ptr = *head_ref;
        int len = 0;
        //Calculate the Length of the List
        while (ptr != NULL)
        {
            len++;
            ptr = ptr->link;
        }
        //Get the mid position to insert the node
        unsigned int count = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
        ptr = *head_ref;
        while (count-- > 1)
            ptr = ptr->link;
        temp->link = ptr->link;//Assign the ptr to the next node to the new node
        ptr->link = temp;//Assign the prev node link to the new node
    }
}
void displayList(Node* head)
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
    head->link = getNode(20);
    head->link->link = getNode(30);
    head->link->link->link = getNode(40);
    cout << "\nLinked List before Insertion at the middle " << endl;
    displayList(head);
    insertNodeAtMid(&head, 33);
    cout << "\nLinked List after Insertion at the middle " << endl;
    displayList(head);
    return 0;
}
