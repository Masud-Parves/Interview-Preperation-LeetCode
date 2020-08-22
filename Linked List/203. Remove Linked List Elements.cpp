/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    if(head==NULL) return head;
    
    while(head!=NULL && head->val == val){
        head = head->next;
    }
    
    struct ListNode* cur = head; 
    
    while(cur!=NULL && cur->next!=NULL){
        if(cur->next->val==val){
            cur->next = cur->next->next;
        }else {
            cur  = cur->next;
        }
    }
    
    return head;

}