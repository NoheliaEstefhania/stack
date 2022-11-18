#include "List.h"
#include <iostream>
#include <assert.h>
using namespace std;

List::List(){
  last = NULL;
}

bool List::isEmpty(){
    return last == NULL;
}

int List::size(){
    int c = 0;
    Node *iter = last;

    while(iter){
        iter=iter->next;
        if(iter == last)
            iter = NULL;
        c++;
    }

    return c;
}

List *List::append(int e) {
  if (isEmpty()){
    last = new Node;
    last->data = e;
    last->next = last;
    return this;
  }
  Node *n = new Node;
  n->data = e;
  n->next = last->next;
  last->next = n;
  last = n;
  assert(!isEmpty());
  return this;
}

int List::head(){
  return last->next->data;
}


int main(){
    List *list = new List();
    list = l->append(1);
    list = l->append(2);
    list = l->append(3);
    list = l->append(4);
    assert(list->size()>0);
    return 0;
}
