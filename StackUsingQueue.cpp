#include <iostream>
#include <queue>
using namespace std;

class Stack
{
public:
    Stack()
    {
        current_size = 0;
    }
    void push(unsigned int value)
    {
        current_size++;
        q2.push(value);//Push the Value into the Empty Q2
        //push all the remaining values in Q1 to Q2
        //This makes the Push Operations costly
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        //swap the names of the Queue
        std::queue<int> q;
        q = q1;
        q1 = q2;
        q2 = q;
    }
    void pop()
    {
        if (q1.empty())
            return;
        //pop operation fast here
        q1.pop();
        current_size--;
#if 0
        //pop operation costly here
        //Leave only one element in Q1 and push all others to Q2
        while (!q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        //pop the only element left in Q1
        q1.pop();
        current_size--;
        //Swap the names of 2 Queues
        std::queue<int> q = q1;
        q1 = q2;
        q2 = q;
#endif
    }
    int top()
    {
        if (q1.empty())
            return -1;
        return q1.front();
    }
    int size()
    {
        return current_size;
    }
private:
    std::queue<int> q1, q2;
    unsigned int current_size;
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "current size: " << s.size()
        << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    cout << "current size: " << s.size()
        << endl;
    return 0;
}
