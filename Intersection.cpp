ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* t1=headA;
    ListNode* t2=headB;
    ListNode* temp1=headA;
    ListNode* temp2=headB;
    int size1=0,size2=0;
    while(temp1!=NULL){
        size1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        size2++;
        temp2=temp2->next;
    }
    int temp=abs(size1-size2);
    if(size1>size2){
        for(int i=0;i<temp;i++){
            t1=t1->next;
        }
        
    }
    else{
        for(int i=0;i<temp;i++){
            t2=t2->next;
        }
    }
    while(t1!=t2){
        t1=t1->next;
        t2=t2->next;
    }
    return t1;
    }
