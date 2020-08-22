/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int getLenght(struct ListNode *head){
    int lenght = 0;
    struct ListNode *cur = head;
    
    while(cur!=NULL){
        lenght++;
        cur = cur->next; 
    }
    return lenght;
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    
    if(headA==NULL || headB==NULL) return NULL;
    
    int lenA = getLenght(headA);
    int lenB = getLenght(headB);
    
    int d=0;
    struct ListNode *list1, *list2;
    
    if(lenA>=lenB){
        d = lenA - lenB;
        list1 = headA;
        list2 = headB;
    } else {
        d = lenB - lenA;
        list1 = headB;
        list2 = headA;
    }
    
    while(d--){
        list1 = list1->next;
    }
    
    while(list1!=NULL){
        if(list1 == list2){
            return list1;
        } else {
            list1 = list1->next;
            list2 = list2->next;
        }
    }
    return NULL;
    
}