ListNode* oddEven(ListNode*head){
      if(head==null || head->next==null){
          return head;
      }
      ListNode*dummyeven=new ListNode(-1);
      ListNode*dummyodd=new ListNode(-1);
      ListNode*evenTail=dummyeven,oddTail=dummyodd,temp=head;
      while(temp!=null){
          if(temp.val%2!=0){
              oddTail->next=temp;
              oddTail=oddTail->next;
          }
          else{
              evenTail->next=temp;
              evenTail=evenTail->next;
          }
          temp=temp->next;
      }
      evenTail->next=dummyodd->next;
      oddTail->next=null;
      return dummyeven->next;
    }
  }
