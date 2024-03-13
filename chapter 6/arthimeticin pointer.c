#include<stdio.h>
int main()
{ 
    int a =45;
    int *ptr=&a;
    printf("%d",ptr);
    printf("%d",ptr  + 1 );
    // now this above program will add one single digit to the adress of the pointer 

    printf("%d",ptr  + 2 );
    // in this it will add two digits  while printing the adress 

    printf("%d",ptr  - 2 );
    // it will reduce the points by 2 when printing the  address 
    return 0;
}