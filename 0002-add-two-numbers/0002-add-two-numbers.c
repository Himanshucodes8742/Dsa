/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int sum1=0,carry=0;

    struct ListNode dummy;//header node
    dummy.next = NULL;

    struct ListNode* current = &dummy;

    while(l1!= NULL || l2!=NULL || carry!=0){
        
        sum1=carry;
        
        if(l1!= NULL){
            sum1 += l1->val;
            l1 = l1->next;
        }
        if(l2!= NULL){
            sum1 += l2->val;
            l2 = l2->next;
        }

        carry=sum1/10;
        sum1 = sum1%10;
        
        struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val = sum1;
        temp->next=NULL;

        current->next = temp;
        current = current -> next;
        
    }
    
    return dummy.next;

}   