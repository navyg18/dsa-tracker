 void addFirst(int data)
  {
      Node*newN=new Node(data);
      if(head==NULL){
          head=newN;
          return;
      }
      newN->next=head;
      head->prev=newN;
      newN->prev=NULL;
      head=newN;
      
  }
