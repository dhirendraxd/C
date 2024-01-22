// Write a C program that takes an integer input from the user and prints whether the number is positive, negative, or zero.

#include<stdio.h>
int main()
{ 
    int i;
    printf("enter  an integer :");
    scanf("%d",&i);
    if (i>0)
    {
    printf("the number is positive  ");
    }
    else if (i<0)
    {
        printf("the number is negative");
    }
else
{
    printf("the number is zero ");
}
    return 0;
}

// Write a C program that takes two integer inputs from the user and prints the larger of the two.
#include<stdio.h>
int main()
{ 

int one,two;
printf("enter two numbers :\n");
scanf("%d %d", &one,&two)

    if (one>two)
    {
        printf("% is the largest",one)
    }
    else if (two>one)
    {
        printf("% is the largest ",two)
    }
    else{
        printf("these both are equal numbers ")
    }
    return 0;
}
// Write a C program that checks whether a given year is a leap year or not. The program should take the year as input from the user.
#include<stdio.h>
int main()
{ 

int year;
printf("enter the year you want to know about :");
scanf("%d",&year);
     
     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
     {
        printf("%d is a leap year \n",year);

     }
     else{
        printf("this is not a leap year\n ");
     }
     


    return 0;
}
// Write a C program to determine if a student has passed or failed an exam. The program should take the student's marks as input from the user. Consider that the passing marks are 40.

#include<stdio.h>
int main()
{ 

int marks;
printf("enter your marks :\n");
scanf("%d",&marks);

if (marks>=40)
{
printf("your are passed \n");

}else
{
    printf("you are failed");
}
    return 0;
}

// Write a C program that takes three integer inputs from the user and prints the largest number using nested if statements.

#include<stdio.h>
int main()
{ 

int three,two,one ;
printf("enter  any three integers:\n");
scanf("%d %d %d",&three,&two ,&one );
      
      if (three>=two)
      {
    
    if (three>=one)
    {
        printf("the larges number is %d",three);
    }
    else
    {
        printf("the largest number is %d",one );
    }
      }
      else
      {
        if (two>=one)
        {
            printf("the largest numbers is :%d\n",two);
        }
        else
        {
        printf("the largest number is :%d\n",one );
        }
        
      }
    return 0;
}
// Write a C program to calculate the roots of a quadratic equation (ax^2 + bx + c = 0). The program should take the values of a, b, and c as input from the user. Assume that the discriminant (b^2 - 4ac) is greater than or equal to 0.
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    printf("Enter coefficient a: ");
    scanf("%lf", &a);

    printf("Enter coefficient b: ");
    scanf("%lf", &b);

    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else {
        printf("No real roots. Complex roots exist.\n");
    }

    return 0;
}

// Write a C program that takes two integers as input and prints whether their sum is even or odd.
#include<stdio.h>
int main()
{ 

int one,two,sum;

printf("enter two numbers :\n");
scanf("%d %d",&one,&two);

sum=one+two;
if (sum & 1 )
{
    printf("the sum is odd ");

}
else
{
    printf("the sum is even ");
}
    return 0;
}
// Write a C program that takes an integer input and checks whether it is a prime number. If it's not a prime number, print its factors.

#include <stdio.h>
#include <math.h>

int main() {
    int number, isPrime = 1;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is less than 2 (not prime)
    if (number < 2) {
        isPrime = 0;
    }
    // Check for factors up to the square root of the number
    else {
        int limit = (int)sqrt(number);
        for (int i = 2; i <= limit; ++i) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Print the result
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number. Factors: 1 ", number);

        // Print factors
        for (int i = 2; i <= sqrt(number); ++i) {
            if (number % i == 0) {
                printf("%d ", i);
                if (i != number / i) {
                    printf("%d ", number / i);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
// Write a C program that takes three integers as input and prints them in ascending order.
#include<stdio.h>
int main()
{ 
int  num1,num2,num3;
printf("enter three integers :");
scanf("%d %d %d",&num1,&num2,&num3);

if (num1>num2)
{
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
}

   if (num2>num3)
   {
    num2=num2+num3;
    num3=num2-num3;
    num2=num2-num3;
   }
    

    return 0;
}

//Write a C program that takes an integer input representing a year and prints whether it is a leap year or not. If it's a leap year, also print the number of days in February.
#include<stdio.h>
int main()
{ 

int year;
printf("enter a year:");
scanf("%d",&year);
if ((year % 4==0 && year %100 !=0)||(year%400==0))
{
    printf("%d is a leap year ,february has 29 days\n",year );

}
else("%d is not a leap year,february has 28 days .\n",year);
    return 0;
}
// Write a program that takes two integers as input and prints their sum.
#include<stdio.h>
int main()
{ 
int a,b,sum;

printf("enter the three integers :");
scanf("%d %d %d",&a,&b);

 sum= a+b;
 printf("the sum of these numbers are :%d \n",sum);


    return 0;
}
// Write a program that takes an integer input and prints whether it is even or odd.
#include<stdio.h>
int main()
{ 

int  inp;
printf("enter a integer :");
scanf(" %d",&inp);
if (inp &1) // always check if its odd or not 
{
printf("the entered integer is odd ");
}
else{
    printf("the entered is even ");
}
    return 0;
}
// Write a program to calculate the factorial of a given positive integer.
#include<stdio.h>
int main()
{ 
    int num;
    double  factorial=1;

    printf("enter an in positive number ");
    scanf("%d",&num);
    if (num<0)
    {
        printf("enter a positive number  ");
    }
    else
    {
        for (int  i = 1; i<=num; i++)
        {
        factorial= factorial * i;
        // the value of factorial increase in each iteration of loop initially factorial values is set to 1 ...
        }
        
    }
    printf("the factorial of %d is %d", num,factorial)
    return 0;
}
// Write a program that takes an integer as input and prints its multiplication table up to 10.
#include<stdio.h>
int main()
{ 

    int multi;
    printf("enter a number to get its table:")
    scanf("%d",&multi);
    for (int i = 1; i<=10; i++)
    {
        printf(" %d  * %d = %d\n ",multi,i,multi*i);
            }
    return 0;
}
// Write a program that takes three integers as input and prints the minimum and maximum of the three.
#include<stdio.h>
#include <math.h>
int main()
{ 
    int num1,num2,num3;
    printf("enter three integers:");
    scanf("%d %d %d ", &num1,&num2, &num3);
    // min=max=num1; 
    // now the value of min and max is num1
  
int min=fmin(fmin(num1,num2),num3);// a simpler function to calculate the minimum
int max=fmax(fmax(num1,num2),num3);// for maximum of a number

    printf("the min is ",min);
    printf("the max is ",max);

    return 0;
}
// Write a program that takes the base and height of a triangle as input and prints its area.
#include<stdio.h>
int main()
{ 
double base,height, area;
printf("enter the base of triangle :");
scanf("%d",&base);
printf("enter the height of triangle:");
scanf("%d",&height);

area=0.5*base*height;
printf("the are is %f",area);
    return 0;
}
// Write a program that takes a character as input and prints whether it is a vowel or a consonant.
#include<stdio.h>
int main()
{ 
    char  result;
    printf("enter a character :");
    scanf("%c",&result);

    if (result=='A'||result=='E'||result=='I'||result=='O'||result=='U' )
    {
        printf("%c is a vowel ",result);
    }
    else{
        printf("this is a consonant");
    }
    return 0;
}
// Write a program that takes an integer as input and calculates the sum of its digits.
#include<stdio.h>
int main()
{ 

int num,originalnumebr,remainder,sum=0;

printf("enter an integer twice :");
scanf("%d %d",&num,&originalnumebr);
     
     while (num!=0)
     {
        remainder=num%10;
        sum= sum+remainder;
        num=num/10;
     }
     printf("the sum of %d is %d",originalnumebr ,sum);
    return 0;
}