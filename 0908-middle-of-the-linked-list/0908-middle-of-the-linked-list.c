/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) 
{
    struct ListNode* twojump= head;
    struct ListNode* onejump = head;
    
    while(twojump != NULL && twojump->next != NULL)
    {
        onejump = onejump -> next;
        twojump = (twojump->next)->next;
    }
    
    return onejump;
}