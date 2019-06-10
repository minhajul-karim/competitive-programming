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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        // Check if the head is NULL
        if (head == NULL)
            return head;
        
        // Create 2 temp pointers to track operation
        ListNode* trav = head;
        ListNode* current = head;
        
        // While current->next is not NULL
        while(current->next)
        {
            // Move current to next node if current->val and current->next->val are same
            if (current->val == current->next->val)
               current = current->next;
            else
            {
                // Link trav with a unique node
                trav->next = current->next;
                trav = trav->next;
                current = current->next;
            }
        }
        
        trav->next = current->next;
        
        return head;
    }
};
