}

#include<stdio.h>
int main()
{ 

   int i =0;
   while (i<=20)
   {
      if (i>=10)
      {
         printf("the valud of i is %d \n",i);
      }
      
      i++;
      // first print then increase 

      ++i;
      // first incrase and then print 
      // (same for -- also )
   }
   return 0;
}