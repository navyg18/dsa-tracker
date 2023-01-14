Node* reverse(Node* head) {
       Node*prev=NULL;
       Node*temp=head;
       while(temp!=NULL){
           Node* nextNode=temp->next;
           temp->next=prev;
           prev=temp;
           temp=nextNode;
       }
       return prev;
    }
Node* subLinkedList(Node* l1, Node* l2)
{
    if(l2==NULL){
        return l1;
    }
    if(l1==NULL){
        l2->data=-l2->data;
        return l2;
    }
    int borrow=0;
    Node*temp1=reverse(l1);
    Node*temp2=reverse(l2);
    Node*head=new Node(-1);
    Node*temp=head;
    Node*c1=temp1;
    Node*c2=temp2;
    while(c1!=NULL){
        int diff=borrow+c1->data- (c2!=NULL) ? c2->data : 0;
        if(diff<0){
            borrow=-1;
            diff+=10;
        }
        else{
            borrow=0;
        }
        temp->next=new Node(diff);
        temp=temp->next;
        c1=c1->next;
        if(c2!=NULL){
            c2=c2->next;
        }
    }
    return reverse(head->next);
    
    
}
