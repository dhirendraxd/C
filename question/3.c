//  Write a program in C to input a number and check whether the number is even or odd
#include<stdio.h>

void oddoreven(int num){
    if (num %2==0)
    {
        printf("the num is even ");
    }
    else
    {
        printf("its odd ")
    }
    
}
int main()
{ 
    int num;
    printf("enter a numeber:")
    scanf("%d",&num);
    
    oddoreven(num);

//
    return 0;
}