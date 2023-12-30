#include <stdio.h>
int main()
{
   int a = 0;

   while (a <= 20)
   // the = is used to print as  a whole number form 0 to 20  otherwise it would have printed 0 to 19
   {
      printf("%d", a); // conditions
      a++;             // multiple conditions 
   }

   return 0;
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