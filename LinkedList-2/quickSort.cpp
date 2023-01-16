Node * getTail(Node * curr) {
    while (curr != NULL && curr->next != NULL) {
        curr = curr->next;
    }
    return curr;
}

Node* partition(Node * head, Node * end, Node ** newHead, Node ** newEnd) {
    Node * pivot = end;
    Node * prev = NULL;
    Node * curr = head;
    Node* tail = pivot;
    while (curr!= pivot) {
        if (curr->data < pivot->data) {
            if ((*newHead) == NULL) {
                (*newHead) = curr;
            }
            prev = curr;
            curr = curr->next;
        }
        else {
            if (prev) {
                prev->next = curr->next;
            }
            Node* temp = curr->next;
            curr->next = NULL;
            tail = curr;
            curr = temp;
        }
    }
    if ((*newHead) ==NULL) (*newHead) = pivot;
    (*newEnd) = tail;
    return pivot;
}

Node * quicksort_(Node * head, Node * end) {
    if (!head || head == end) {
        return head;
    }
    Node * newHead = NULL;
    Node* newEnd = NULL;
    Node * pivot = partition(head, end, &newHead, &newEnd);
    if (newHead != pivot) {
        Node * temp = newHead;
        while (temp->next != pivot) {
            temp = temp->next;
        }
        temp->next = NULL;
        newHead = quicksort_(newHead, temp);
        temp = getTail(newHead);
        temp->next = pivot;
    }

    pivot->next = quicksort_(pivot->next, newEnd);
    return newHead;
}

void quickSort(Node ** headRef) {
    (*headRef) = quicksort_(*headRef, getTail(*headRef));
}
