#include<stdio.h>
int main()
{ 
int x=4;
int y=9;
printf("the value of 3*x - 8*y is %d \n ",3*x - 8*y);

    /* the given maths operators are given priority as of they are listed in numbers  :

              1)  * / %
              2)  + -
              3)  =


//  printf("the value of 3*x - 8*y is %d \n ",3*(x - 8*y)); 
if we apply () as above then  the equation inside  this would be given first priority  even though  is symbol is not as we have studied */
    return 0;
}