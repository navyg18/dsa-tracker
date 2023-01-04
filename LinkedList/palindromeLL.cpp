bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return true;
        }
        stack<int> st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL && !st.empty()){
            int ans=st.top();
            st.pop();
            if(temp->val!=ans){
                return false;
            }
            temp=temp->next;
        }
        return true;
    }
