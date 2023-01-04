void kReverse(int k) {
    linkedlist* prev=NULL;
    while(this->size>0){
        linkedlist* curr= new linkedlist();
        if(this->size>=k){
        for(int i=0;i<k;i++){
            int val=this->getFirst();
            this->removeFirst();
            curr->addFirst(val);
        }
        }
        else{
            int s=this->size;
            for(int i=0;i<s;i++){
                int val=this->getFirst();
            this->removeFirst();
            curr->addLast(val);
            }
        }
        if(prev==NULL){
            prev=curr;
        }
        else{
            prev->tail->next=curr->head;
            prev->tail=curr->tail;
            prev->size+=curr->size;
        }
    }
    this->head=prev->head;
    this->tail=prev->tail;
    this->size=prev->size;
  }
