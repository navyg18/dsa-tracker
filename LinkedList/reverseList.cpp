ListNode* reverseList(ListNode* head) {
       ListNode*prev=NULL;
       ListNode*temp=head;
       while(temp!=NULL){
           ListNode* nextNode=temp->next;
           temp->next=prev;
           prev=temp;
           temp=nextNode;
       }
       return prev;
    }
