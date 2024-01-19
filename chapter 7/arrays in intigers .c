#include<stdio.h>
int main()
{ 

int a[4]={34,232,4234,23};
printf("the value of first intiger in a is %d", a[0]);
printf("the value of first intiger in a is %d", a[1]);
        //   0) output  : 34
        //  1) output  : 232



       double a[4]={34.23,232.232,4234.242,23.4};
               //%g for  float can cause to print only the necessary values afterwards ..................
printf("the value of first intiger in a is %.3f", a[0]);
                              // the .3f cause only 3digits to print after the number  ..........
printf("the value of first intiger in a is %.2f", a[1]);
                             // the .2f cause to print 2 of them afterwards ............


// if we have only written %f the it would print whole numbers after it  or if there was no any  point value after the decimal then it would print 000000 instead  so we use them.....
  return 0;
}