#include "stack.h"

int main()
{
   Stack S;
   std::cout<<"stack status"<<!S.empty()<<std::endl;
   std::cout<<"stack size "<<S.size()<<std::endl;
   for(int i=0; i<10;i++)
   {
      S.push(i);
   }
   std::cout<<"stack status"<<!S.empty()<<std::endl;
   std::cout<<"stack size "<<S.size()<<std::endl;
   for(int i=0; i<10;i++)
   {
      std::cout<<"stack size "<<S.size()<<std::endl;
      std::cout<<S.top()<<std::endl;
      S.pop();
   }
   std::cout<<"stack status"<<!S.empty()<<std::endl;
   std::cout<<"stack size "<<S.size()<<std::endl;
   return 0;
   
}
