void fold(ListNode *head)
{
    if(head==NULL || head->next==NULL){
        return;
    }
    int n=0;
    ListNode* a=head;
    while(a!=NULL){
        a=a->next;
        n++;
    }
    ListNode* temp2=head;
    int half=n/2;
    while(half!=0){
    ListNode* temp=head;
    ListNode* prev=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    temp->next=temp2->next;
    temp2->next=temp;
    temp2=temp2->next->next;
    half--;
    }
}
