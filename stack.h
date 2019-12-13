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
      bool empty();
      int size();     
   private:
      struct Link
      {
         Link * next;
         int data;
      };
      Link * makeNewItem (int data);
      Link * head;
   protected:
};
