#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H
#include "stack.h"
#define FACTOR 10
template<typename T>
class ArrayStack: public Stack<T>{
  private:
    T* data;
    int size; //memory size
    T* sp; //stackPointer		
    //no hay necesidad de poner virtual porque ya heredamos la virtualidad.
    void resize();
  public:
    ArrayStack(int);
    //ArrayStack(int s):size{s}, data{new T[size]}, sp{data}{}
    void push(T);
    void pop();
    T top();
    bool empty();
};
#endif
