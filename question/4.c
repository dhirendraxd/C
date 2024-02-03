//  Write a program in C implementing an array which store 5 numbers and gives minimum among each as output. 
#include<stdio.h>
int main()
{ 
    int  num[5];
printf("enter 5 numbers :\n");

for (int  i = 0; i < 5; i++)
{
printf("enter %d:",i+1);
scanf("%d",&num[i]);
}


int min = num[0];
for (int i = 1; i <5; i++)
{
    if (num[i]<min)
    {
        min=num[i];
    }   
}
printf("the min num is %d",min);


    return 0;
}