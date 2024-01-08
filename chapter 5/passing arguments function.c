#include<stdio.h>
// void total();

// void total() {printf("to add both a and b ") }
// this was void function

int total(int a ,int b);
// when ever using a function we shoudl always predefine it at the top 


// function definition 
int total(int a, int b);{
    return a+b;

}

int main()

{ 
int a,b;

printf("enter value for a\n");
scanf("%d",&a)
printf("enter value for b\n");
scanf("%d," &b )

int sum =total (a,b);
printf("the sum was %d",sum);
    return 0;
}