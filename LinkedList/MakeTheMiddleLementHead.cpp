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

void makeTheMiddleNodeHead(Node** head)
{
    //Get the length of the List
    //Get the middle position
    Node* temp = *head;
    
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->link;
    }
    //Get the Mid Position
    int count = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);
    /***********************************************************************/
    /*                    Algo to Make the Mid Node as Head                */
    /***********************************************************************/
    temp = *head;
    Node* prev = *head;
    while (count-- > 2)//As we are interested in Mid+Prev element, we have 2 here
    {
        prev = temp->link; //Gets the Previous Element to the Mid Element
        temp = temp->link->link; //Gets the Mid Element
    }
    Node* headTemp = *head; //Take a Temp node ptr to get the head ptr
    prev->link =  temp->link;   //Assign the prev node to post-mid node
    temp->link = headTemp;  //Assign the Mid Node next link to head Link
    *head = temp;           //Assign the Mid node to head 
    /***********************************************************************/
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
    head->link = getNode(20);
    head->link->link = getNode(30);
    head->link->link->link = getNode(40);
    head->link->link->link->link = getNode(70);
    head->link->link->link->link->link = getNode(170);
    head->link->link->link->link->link->link = getNode(190);
    head->link->link->link->link->link->link->link = getNode(199);
    cout << "\n Before" << endl;
    display(head);
    cout << "\nAfter " << endl;
    makeTheMiddleNodeHead(&head);
    display(head);
}
/*
Output:
 Before
10 20 30 40 70 170 190 199
After
70 10 20 30 40 170 190 199 
*/
