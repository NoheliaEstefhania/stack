#include "arrayStack.h"
#include <assert.h>
#include <iostream>
using namespace std;

template<typename T>
//constructor
ArrayStack<T>:: ArrayStack(int s){
  size = s;
  data = new T[s];
  sp = data;
  assert(empty());
  pop();
}

template<typename T>
void ArrayStack<T>::push(T e){
  int numelem = sp - data; //cantidad de elementos , resta con aritmetica de punteros
  if (numelem == size)
    resize();//debo reservar más memoria, data apuntará a un arreglo nuevo más grande|:
  *sp = e; //almacena T en la posición libre sp
  sp++;
  assert(*(sp-1) == e);
  assert(!empty());
}

template<typename T>
void ArrayStack<T>::pop(){
  if(empty()){
    return;
  }
  sp--;
}

template <typename T>
bool ArrayStack<T>::empty(){
  int numelem = sp - data;
  assert(numelem >= 0); //quizá sea una comprobación redundante
  return numelem == 0;
}

template<typename T>
void ArrayStack<T>::resize(){
  T *newData = new T[size + FACTOR];
  for(int i=0; i < size; i++)
    newData[i] = data[i];
  delete[] data;
  data = newData;
  //sp = data + size;
  size += FACTOR;
}

template<typename T>
T ArrayStack<T>::top(){
  assert(!empty());
  return *(sp - 1);
}

int main(){
  ArrayStack<int> arr(8);
  arr.push(1);
  arr.push(2);
  arr.push(3);
  arr.push(4);
  arr.push(5);
  arr.push(6);
  arr.push(7);

  cout<<arr.top()<<endl;
  arr.pop();
  cout<<arr.top()<<endl;
  arr.pop();
  cout<<arr.top()<<endl;
  arr.pop();
  cout<<arr.top()<<endl;
  arr.pop();
  cout<<arr.top()<<endl;
}

//implementar precondiciones y postcondiciones
