Node * merge2LL(Node * head1, Node * head2) {
    Node*res=NULL;
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

Node * mergeKlistsHelper(Node ** lists, int st, int end) {
    if (st > end) {
        return NULL;
    }
    if (st == end) {
        return lists[st];
    }
    int mid = (st + end)/2;
    Node * l1 = mergeKlistsHelper(lists, st, mid);
    Node * l2 = mergeKlistsHelper(lists, mid + 1, end);
    return merge2LL(l1, l2);
}

Node * mergeKlists(Node ** lists) {
    if (sizeof(lists) == 0) {
        return NULL;
    }
    int len = sizeof(lists)/sizeof(lists[0]);
    return mergeKlistsHelper(lists, 0, len - 1);    
}
