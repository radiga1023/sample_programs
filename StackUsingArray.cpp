#include <iostream>
using namespace std;
#define MAXSIZE 10

struct ArrayStack
{
  int top;
  int capacity;
  int*array;
};

ArrayStack* CreateStack()
{
  ArrayStack* S = new ArrayStack;
  S->capacity = MAXSIZE;
  S->top = -1;
  S->array = new int[S->capacity];
  return S;
}

int isEmptyStack(ArrayStack* S)
{
  return (S->top == -1);
}

int isFullStack(ArrayStack* S)
{
  return (S->top == S->capacity - 1);
}

void Push(ArrayStack* S, int data)
{
  if (isFullStack(S))
    cout << "Stack Overflow!!" << endl;
  else
    S->array[++S->top] = data;
}

int Pop(ArrayStack* S)
{
  if (isEmptyStack(S))
    cout << "Stack isEmpty!!" << endl;
  else
    return (S->array[S->top--]);
}

void DeleteStack(ArrayStack* S)
{
  if (S)
  {
    if (S->array)
    {
      delete[] S->array;
    }
    delete S;
  }
}
