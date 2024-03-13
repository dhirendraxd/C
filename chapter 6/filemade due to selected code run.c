#include<stdio.h>
int main()
{ 
    int a =45;
    int *ptr=&a;
    printf("%d",ptr);
    printf("%d",ptr  + 1 );
    return 0;
}