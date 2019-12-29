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
    ListNode* reverseList(ListNode* head)
    {
        if (head == NULL)
        {
            return NULL;
        }

        ListNode *tempHead = head, *reversedHead = NULL, *nextNode = NULL;

        while (tempHead != NULL)
        {
            ListNode* newNode = new ListNode(tempHead->val);
            newNode->next = nextNode;
            nextNode = newNode;
            reversedHead = newNode;
            tempHead = tempHead->next;
        }

        return reversedHead;

    }
};
