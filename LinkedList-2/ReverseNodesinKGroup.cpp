class Solution {
    ListNode*th=NULL;
    ListNode*tt=NULL;
    void addFirst(ListNode* head){
        
        if(th==NULL){
            th=head;
            tt=head;
        }
        else{
            head->next=th;
            th=head;
        }
    }
    int length(ListNode* head){
        ListNode*temp=head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        return len;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
    if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        ListNode*oh=NULL;
        ListNode*ot=NULL;
    int n=length(head);    
    ListNode*temp=head;
    while(n>=k){
        int dup=k;
        while(dup-->0){
            ListNode*forward=temp->next;
            temp->next=NULL;
            addFirst(temp);
            temp=forward;
        }
        if(oh==NULL){
            oh=th;
            ot=tt;
        }
        else{
            ot->next=th;
            ot=tt;
        }
        th=NULL;
        tt=NULL;
        n-=k;
    }
    ot->next=temp;
    return oh;
    }
};
