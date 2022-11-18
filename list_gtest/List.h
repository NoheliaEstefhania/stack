#ifndef LIST_H
#define LIST_H
struct Node {
  int data;
  Node* next;
};
class List {
  public:
    List();
    List *append(int e);
    int head();
    List *tail();
    bool isEmpty();
    void to_string();
    int size();
  private:
    Node* last;  
};
#endif
