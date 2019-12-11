//тестовая реализация стека 
#include <deque>
#include <iostream>
class Stack
{
   public:
      Stack();
      ~Stack();
      void push(int i);
      void pop();
      int top();      
   private:
      std::deque<int> stack;
   protected:
};
