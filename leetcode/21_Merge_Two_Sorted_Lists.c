/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    
    // Check if any of l1 or l2 is NULL
    if (l1 == NULL)
        return l2;
    else if (l2 == NULL)
        return l1;
    
    // Create a travarsel node for the resultant list
    struct ListNode* trav = NULL;
    
    // Set the initial point for trav to start travarsing
    if (l1->val < l2->val)
    {
        trav = l1;
        l1 = l1->next;
    }
    else
    {
        trav = l2;
        l2 = l2->next;
    }
    
    // Create a pointer to the resultant list
    struct ListNode* l3 = trav;
    
    // Travarse 2 lists and append the relatively smaller nodes to trav until one of l1 or l2 becomes NULL 
    while(l1 && l2)
    {
        if (l1->val < l2->val)
        {
            trav->next = l1;
            trav = l1;
            l1 = l1->next;
        }
        else
        {
            trav->next = l2;
            trav = l2;
            l2 = l2->next;
        }
    }
    
    // One of l1 or l2 is NULL at this point
    // Append the NOT NULLED list to trav
    if (l1 == NULL)
        trav->next = l2;
    else
        trav->next = l1;
    
    return l3;
    
}
