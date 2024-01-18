#include<stdio.h>

void printtable(int n );// arguments passing in function 
// void is used when we dont want to a function to return a value 



void printtable(int n){
    for (int i = 1; i <=10; i++)
    {
        printf("%d * %d = %d\n", n i ,i*n);
    } 
    // this function doesnot return anything it just prints value 
    
}
// printtable(int n); 
// this is how we call a parameter function...


int main()
{ 

int n;
printf("enter a number to print its table:");
scanf("%d",&n);

printtable(n );
// we dont have to write int n we can only write n instead

    return 0;
}


 