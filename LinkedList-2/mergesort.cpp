ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
    ListNode*res=NULL;
    if(head1==NULL){
        return head2;
    }
    else if(head2==NULL){
        return head1;
    }
    if(head1->val>=head2->val){
        res=head2;
        res->next=mergeTwoLists(head1,head2->next);
    }
    else{
        res=head1;
        res->next=mergeTwoLists(head1->next,head2);
    }
    
    return res;
    }
  
public:
    ListNode* sortList(ListNode* head) {
        
    if(head==NULL || head->next==NULL){
        return head;
      }   
        ListNode *temp = NULL;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast !=  NULL && fast -> next != NULL){
            temp = slow;
            slow = slow->next;          
            fast = fast->next->next;  
            }   
        temp->next=NULL;            
      ListNode* first = sortList(head);
      ListNode* second = sortList(slow);
      return mergeTwoLists(first, second);
      
    }
};
