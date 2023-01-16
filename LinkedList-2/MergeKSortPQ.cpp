class Solution {
public:
struct sort_fun{
        bool operator() (ListNode* x, ListNode* y){
            bool flag = true;
            if(x->val >= y->val) flag = true;
            else flag = false;

            return flag; 
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, sort_fun> pq;
        for(ListNode* i:lists){
            if(i!=NULL){
                pq.push(i);
            }
        }
        ListNode*dummy=new ListNode(-1);
        ListNode*temp=dummy;
        while(!pq.empty()){
            ListNode*node=pq.top();
            pq.pop();
            temp->next=node;
            temp=temp->next;
            node=node->next;
            if(node!=NULL){
                pq.push(node);
            }
        }
        return dummy->next;
    }
};
