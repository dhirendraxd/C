// Write a program to calculate the sum of all natural number from 1 to n.
#include<stdio.h>
int main()
{     
    int a ,sum;
    printf("enter a positive num:\n");
    scanf("%d",&a);

// the below if function is optional but okay to use for better code writing 
    if (a<=0)
    {
        printf("enter a valid num,again");
    }
    for (int i = 0; i <=n; i++)
    {
        sum +=i;
    }
    
    printf("the sum is %d",sum);

        return 0;
}