ListNode *segregate012(ListNode *head)
{
    ListNode*zero=new ListNode(-1);
    ListNode*zero1=zero;
    ListNode*one=new ListNode(-1);
    ListNode*one1=one;
    ListNode*two=new ListNode(-1);
    ListNode*two1=two;
    ListNode*temp=head;
    while(temp){
        if(temp->val==0){
            zero1->next=temp;
            zero1=zero1->next;
        }
        else if(temp->val==1){
            one1->next=temp;
            one1=one1->next;
        }
        else if(temp->val==2){
            two1->next=temp;
            two1=two1->next;
        }
        temp=temp->next;
    }
    zero1->next=one->next;
    one1->next=two->next;
    two1->next=NULL;
    if(zero->next){
        return zero->next;
    }
    else if(one->next){
        return one->next;
    }
    return two->next;
}
