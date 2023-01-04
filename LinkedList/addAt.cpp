void addAt(int pos, int data) {
    if(pos<0){
        cout<<"Invalid arguments"<<endl;
        return;
    }
    else if(pos==0){
        addFirst(data);
    }
    else{
    node*prev=head;
    node* newnode=new node;
    newnode->val = data;
    for(int i=0;i<pos-1;i++){
        prev=prev->next;
    }
    newnode->next=prev->next;
    prev->next=newnode;
    }
  }
