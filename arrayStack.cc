#include "arrayStack.h"
#include <assert.h>
#include <iostream>
#include <gtest/gtest.h>
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
  sp = data + size;
  size += FACTOR;
}

template<typename T>
T ArrayStack<T>::top(){
  assert(!empty());
  return *(sp - 1);
}

//implementar precondiciones y postcondiciones

class arrayStackTest : public ::testing::Test {
  protected:
    void SetUp() override {
      stack1->push(2);
      stack2->push(5);
      stack3->push(7);
    }

    void TearDown() override {
      cout<<"ELIMINANDO PUNTEROS"<<endl;
      delete stack1;
      delete stack2;
      delete stack3;
      delete stack4;
    }
    ArrayStack<int> *stack1 = new ArrayStack<int> (4);
    ArrayStack<int> *stack2 = new ArrayStack<int> (5);
    ArrayStack<int> *stack3 = new ArrayStack<int> (7);
    ArrayStack<int> *stack4 = new ArrayStack<int> (1);
};

TEST_F(arrayStackTest, IsEmptyInitially) {
  ASSERT_EQ(stack1->empty(), true);
  ASSERT_EQ(stack2->empty(), false);
}

TEST_F(arrayStackTest, IsEmptyFinal) {
  EXPECT_EQ(stack1->empty(), false);
  EXPECT_EQ(stack2->empty(), false);
}

TEST_F(arrayStackTest, staskPop) {
  stack1->pop();
  EXPECT_EQ(stack1->empty(), true);
}

TEST_F(arrayStackTest, stackTop) {
  stack3->top();
  EXPECT_EQ(stack3->top(), 7);
}






