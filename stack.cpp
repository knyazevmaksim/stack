#include "stack.h"
#include <iostream>

void Stack::push(int i)
{
   stack.push_back(i);
}

void Stack::pop()
{
   if (stack.empty())
      std::cout<<"stack is empty"<<std::endl;
   else
      stack.pop_back();
}

int Stack::top()
{
 if (stack.empty())
      {
         std::cout<<"stack is empty"<<std::endl;
         return 0;
      }
   else
      return stack.back();
}

Stack::Stack()
{
   std::deque<int> stack;
}
Stack::~Stack()
{
   stack.clear();
}

