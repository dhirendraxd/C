// Write a C program to generate the Fibonacci series up to the nth term. Take the value of 'n' as input from the user and display the Fibonacci series.

#include<stdio.h>
int main()
{ 
    int n ,currentterm=0,previousterm=0,nextterm=1;
    printf("enter any number :\n");
    scanf("%d",&n);

    if (n<=0)
    // if the number is less then or equal to 0 then prompt 
    {
        printf("invalid input..retry\n")
    }
    printf("Fibonacci series:\n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d",currentterm)]

        nextterm=currentterm+previousterm;
        previousterm=currentterm;
        currentterm=nextterm;
    
    }

    return 0;
}