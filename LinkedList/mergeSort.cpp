linkedlist mergeSort(Node* head, Node* tail ) {
  if(head == tail){
        linkedlist single;
        single.addLast(head->data);
        return single;
      }

      Node* mid = getMid(head, tail);
      linkedlist first = mergeSort(head, mid);
      linkedlist second = mergeSort(mid->next, tail);
      linkedlist sorted = mergeTwoSortedLists(first, second);
      return sorted;
}
