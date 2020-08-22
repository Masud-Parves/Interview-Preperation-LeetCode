/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    
    
    if(head==NULL || head->next==NULL) return false;
    
    struct ListNode* slow = head;
    struct ListNode* fast = head->next;
    
    while(fast!=NULL && fast->next!=NULL && slow!=NULL){
        if(fast == slow) {
            return true;
        }
        
        fast = fast->next->next;
        slow = slow->next;
    }
    return false;
}