#include <gtest/gtest.h>
#include "arrayStack.cc"
class arrayStackTest : public ::testing::Test {
 protected:
  void SetUp() override {
     stack1->push(2);
     stack2->push(5);
     stack3->push(7);
  }

  // void TearDown() override {}
  ArrayStack<int> *stack1 = new ArrayStack<int> (4);
  ArrayStack<int> *stack2 = new ArrayStack<int> (5);
  ArrayStack<int> *stack3 = new ArrayStack<int> (7);
};

TEST_F(stackArrayTest, IsEmptyInitially) {
  EXPECT_EQ(stack1->empty(), false);
}

