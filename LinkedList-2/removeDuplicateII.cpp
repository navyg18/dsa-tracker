 ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode*dummy=new ListNode(-1);
        ListNode*prev=dummy;
        prev->next=head;
        ListNode*temp=head->next;
        while(temp!=NULL){
            bool flag=false;
            while(temp!=NULL && prev->next->val==temp->val){
                flag=true;
                temp=temp->next;
            }
            if(flag){
                prev->next=temp;
            }
            else{
                prev=prev->next;
            }
            if(temp!=NULL){
                temp=temp->next;
            }
            }
            return dummy->next;
    }
