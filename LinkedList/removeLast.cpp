void removeLast() {
    if(head==NULL){
        cout<<"List is empty";
        return;
    }
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
  }
