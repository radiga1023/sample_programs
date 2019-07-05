/*

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in 
reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
*/

#include <iostream>
using namespace std;
class ListNode
{
public:
    int value;
    ListNode* next;
    //ListNode(int x) : val(x), next(NULL) {}
};

ListNode* insertNode(int value)
{
    ListNode *head = new ListNode;
    head->value = value;
    head->next = NULL;
    return head;
}


class Solution {
public:
    void addTwoNumbers(ListNode* l1, ListNode* l2) {
        int dummy = 0;
        int t2 = 0;
        ListNode* temp = NULL;
        ListNode* head = NULL;
        while (l1 != NULL && l2 != NULL)
        {
            if (temp == NULL)
            {
                temp = new ListNode;
                head = temp;
            }
            else
            {
                temp->next = new ListNode;
                temp->next->next = NULL;
                temp = temp->next;
            }
            dummy = l1->value + l2->value + t2;
            if (dummy > 9)
            {
                t2 = dummy - 9;
                temp->value = 10 - dummy;
            }
            else
            {
                temp->value = dummy;
            }   
            l1 = l1->next;
            l2 = l2->next;
        }
        while (head != NULL)
        {
            cout << head->value << " ";
            head = head->next;
        }
    }
};

int main()
{
    ListNode * N1 = NULL;
    N1 = insertNode(2);
    N1->next = insertNode(4);
    N1->next->next = insertNode(3);


    ListNode * N2 = NULL;
    N2 = insertNode(5);
    N2->next = insertNode(6);
    N2->next->next = insertNode(4);

    Solution S;
    S.addTwoNumbers(N1, N2);
    return 0;
}
