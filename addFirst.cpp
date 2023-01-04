void addbeg(int val) {
    node* newnode = new node;
    newnode->val = val;
    newnode->next = NULL;
    if (head == NULL) {
      head = newnode;
    }
    else {
      newnode ->next = head;
      head = newnode;
    }

  }
