#include "stack.h"

int main()
{
   Stack S;
   for(int i=0; i<10;i++)
   {
      S.push(i);
   }
   for(int i=0; i<10;i++)
   {
      std::cout<<S.top()<<std::endl;
      S.pop();
   }
   return 0;
   
}
