
Class IntList{
private:
  int head;
  IntList tail;

private:
  void IntList(final int head) {
    this.head = head;
    tail = null;
  }
  void IntList(final int X, final IntList Xs) {
    head = X;
    tail = Xs;
  }
};
