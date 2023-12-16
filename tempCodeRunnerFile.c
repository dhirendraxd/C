#include<stdio.h>
int main()
{ 
    //
int a =4;
int b =5;
int z=b+a;
// we can also add two variables in a line and then print it but b + a = z; its a error code isn't possible  

printf("the value of z is %d \n" ,z);
printf("the value of a * b is :%d\n ",a*b);
printf("the value of a / b is :%d\n ",a / b);
printf("the value of a + b is :%d\n",a+b);
printf("the value of a - b is :%d\n ",a-b);
// we can add sub , dic and somplify  as above  and : is not mandatory  we can use it or remove as we want 

printf("when divided by 2  it leaves a reminder of %d \n ",5%2);
printf(" when -5  divided by 2  it leaves a reminder of %d \n ",5%-2);
printf("when divided by 2  it leaves a reminder of %d \n ",-5%2);
// in c we dont assume any thing  to let computer assume by itself we always have to  give proper command 
printf("the value of 4 to power 5 is %f\ n",pow(2,5));
    return 0;
}