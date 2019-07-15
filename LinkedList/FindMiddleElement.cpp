//https://leetcode.com/problems/middle-of-the-linked-list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fastPtr = head;
        ListNode* slowPtr = head;
        if (head != NULL)
        {
            while(fastPtr != NULL && fastPtr->next != NULL)
            {
                fastPtr = fastPtr->next->next;
                slowPtr = slowPtr->next;
            }
        }
        return slowPtr;
    }
};
