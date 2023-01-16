void add(Node * head, Node * ansItr) {
    Node * c1 = head;
    Node * c2 = ansItr;
    int carry = 0;
    while (c1 != NULL || carry != 0) {
        int sum = carry + (c1 != NULL? c1->data:0) + (c2 != NULL? c2->data:0);
        int digit = sum%10;
        carry = sum/10;
        if (c2->next != NULL) c2->next->data = digit;
        else c2->next = new Node(digit);
        if (c1 != NULL) c1 = c1->next;
        c2 = c2->next;
    }
}

Node * multiplyLLWithDigit(Node * head, int digit) {
    Node * dummy = new Node(-1);
    Node * ac = dummy; //answer current
    Node * curr = head;
    int carry = 0;
    while (curr != NULL || carry != 0) {
        int sum = carry + (curr != NULL ? curr->data:0) * digit;
        int num = sum %10;
        carry = sum/10;
        ac->next = new Node(num);
        ac = ac->next;
    }
    return dummy->next;
} 

Node * multiply2LL(Node * l1, Node * l2) {
    l1 = reverse(l1);
    l2 = reverse(l2);

    Node * l2itr = l2;
    Node * dummy = new Node(-1);
    Node * ansItr = dummy;
    while (l2itr != NULL) {
        Node * prod = multiplyLLWithDigit(l1, l2itr->data);
        l2itr = l2itr->next;
        add(prod, ansItr);
        ansItr = ansItr->next;
    }
    return reverse(dummy->next);
}
