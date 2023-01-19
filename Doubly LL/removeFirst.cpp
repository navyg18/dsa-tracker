public int removeFirst() {
      if (head==null)
        return -1;
      if(head->next==null){
        return head->data;
      }
      Node*forw=head->next;
      forw->prev=NULL;
      Node*temp=head;
      temp->next=NULL;
      head=forw;
      return temp->data;
    }
