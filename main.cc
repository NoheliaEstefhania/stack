#include <iostream>
#include <stdlib.h>
#include "arrayStack.h"
using namespace std;

int main(){
  ArrayStack pstack = new ArrayStack();
  T first = 5; 
  pstack->push(first);
  cout<<pstack->data<<" ";
  pstack->top();
  return 0;
}
