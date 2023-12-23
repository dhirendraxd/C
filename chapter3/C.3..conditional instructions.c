#include<stdio.h>
// a program to check wether given number is odd or given
int main()
{ 
//if else statement
int a , b ;
printf("enter the number \n");
scanf("%d",&a);
printf("enter the number \n");
scanf("%d",&b);

    if(a % 2==0){
        printf("%d is even \n",a);
    }
    else{
        printf("%d is odd\n",a);
    }

     if(b % 2==0){
        printf("%d is even \n",b);
    }
    else{
        printf("%d is odd\n",b);
    }

    return 0;
}
// for more check the below link :
// https://www.programiz.com/c-programming/c-operators