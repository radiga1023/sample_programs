#include <iostream>
using namespace std;

/*Create a Node*/
struct Node
{
    int data;
    Node* link;
};

/*Create Pointer to keep the Top*/
Node* top;

/*Utility Function to Push the Data element*/

void push(int data)
{
    Node* temp;
    temp = new Node;
    if (temp == NULL) { cout << "Heap Overflow! Exiting" << endl; exit(1); }
    temp->data = data;
    temp->link = top;
    top = temp;
}

bool isEmpty()
{
    return top == NULL;
}

int peek()
{
    if (!isEmpty())
    {
        return top->data;
    }
}
void pop()
{
    Node* temp;
    if (top == NULL) { cout << "Stack Underflow" << endl; exit(1); }
    temp = top;
    top = top->link;
    temp->link = NULL;
    delete temp;
}
void print()
{
    Node* temp;
    if (top == NULL) { cout << "Stack Underflow" << endl; exit(1); }
    temp = top;
    while (temp->link != NULL)
    {
        cout << temp->data << endl;
        temp = temp->link;
    }
}

int main()
{
    push(10);
    push(23);
    push(18);
    push(33);
    push(12);//top
    print();
    cout << "Top Element is: " << top->data << endl;
    cout << top << " " << top->link << " " << top->link->link->data << endl;//top->link->link->data prints value 18
    pop();
    pop();
    print();
    return 0;
}
