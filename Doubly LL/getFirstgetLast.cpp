public int getFirst() {
        if(ListIsEmptyException()){
            return -1;
        }
        return head.data;
    }

    public int getLast() {
        if(ListIsEmptyException()){
            return -1;
        }
        return tail.data;
    }
