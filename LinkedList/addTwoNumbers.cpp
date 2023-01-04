ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2){
            return NULL;
        }
        ListNode* head=new ListNode();
        ListNode* temp=head;
        int rem=0;
        
        while(l1 || l2 || rem){
            int tempsum=0;
            if(l1){
                tempsum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                tempsum+=l2->val;
                l2=l2->next;
            }
            tempsum+=rem;
            rem=tempsum/10;
            ListNode* newnode=new ListNode(tempsum%10);
            temp->next=newnode;
            temp=temp->next;
        }
        return head->next;
    }
