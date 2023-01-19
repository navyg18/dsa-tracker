public int removeLast() {
        if(head==null){
            return -1;
        }
        Node prev=head;
        Node temp=head;
        while(temp.next!=null){
            prev=head;
            temp=temp.next;
        }
        prev.next=null;
        temp.prev=null;
        return prev.data;
    }
