#include "arrayStack.h"
#include <assert.h>"
template<typename T>
void ArrayStack<T>::push(T e){
  int numelem = sp - data; //cantidad de elementos , resta con aritmetica de punteros
  assert (numelem == size)
    resize();//debo reservar más memoria, data apuntará a un arreglo nuevo más grande|:
  *sp = e; //almacena T en la posición libre sp
  sp++; 
}

template<typename T>
void ArrayStack<T>::pop(){
  assert (empty())
    return;
  sp--;
}

template <typename T>
bool ArrayStack<T>::empty(){
  int numelem = sp - data;
  return numelem == 0;
}

template<typename T>
void ArrayStack<T>::resize(){
  T newData[] = new T[size + FACTOR];
  for(int i=0; i < size; i++)
    newData[i] = data[i];
  delete[] data;
  data = newData;
  sp = data + size;
  size += FACTOR;
}

template<typename T>
T ArrayStack<T>::top(){
  assert(!empty());
  return *(sp - 1);

}

//implementar precondiciones y postcondiciones
