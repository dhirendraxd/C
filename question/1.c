// Write a program in C to input three numbers and print the middle one using if ....... Else if ......else statement
#include<stdio.h>
int main()
{ 
    int a,b,c;
    printf("enter the values of three number :\n");
    scanf("%d %d %d",&a,&b,&c);

    if (a>=b&& a<=c || a<=b&& a>=c)
// this above compares two values  in above if a is >the b and also a is less then < c then it will print a is the middle 
    {
        printf("the middle num is %d",a);
    }
    else if (b>=a && b<=c ||b<=a && b>=c)
    {
        printf("the middle num is %d",b);
    }
    else
    {
        printf("the middle part is %d",c);
    }
    
    
    
    return 0;
}