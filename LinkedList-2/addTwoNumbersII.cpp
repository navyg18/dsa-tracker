class Solution {
    ListNode* reverse(ListNode* head) {
       ListNode*prev=NULL;
       ListNode*temp=head;
       while(temp!=NULL){
           ListNode* nextNode=temp->next;
           temp->next=prev;
           prev=temp;
           temp=nextNode;
       }
       return prev;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2){
            return NULL;
        }
        ListNode*c1=reverse(l1);
        ListNode*c2=reverse(l2);
        ListNode* head=new ListNode();
        ListNode* temp=head;
        int rem=0;
        
        while(c1 || c2 || rem){
            int tempsum=0;
            if(c1){
                tempsum+=c1->val;
                c1=c1->next;
            }
            if(c2){
                tempsum+=c2->val;
                c2=c2->next;
            }
            tempsum+=rem;
            rem=tempsum/10;
            ListNode* newnode=new ListNode(tempsum%10);
            temp->next=newnode;
            temp=temp->next;
        }
        return reverse(head->next);
    }
    
