ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
    ListNode*res=NULL;
    if(head1==NULL){
        return head2;
    }
    else if(head2==NULL){
        return head1;
    }
    if(head1->val>=head2->val){
        res=head2;
        res->next=mergeTwoLists(head1,head2->next);
    }
    else{
        res=head1;
        res->next=mergeTwoLists(head1->next,head2);
    }
    
    return res;
    }
