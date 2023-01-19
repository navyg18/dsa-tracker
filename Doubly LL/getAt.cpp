public int getAt(int index) {
      if (ListIsEmptyException())
        return -1;
      else if (indexIsInvalidException(index, 0, this.size - 1))
        return -1;

      Node temp = getNodeAt(index);
      return temp.data;
    }
