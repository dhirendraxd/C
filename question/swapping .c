// Write a C program to calculate the sum of two numbers entered by the user.
#include<stdio.h>
int main()
{ 
    int a ,b;
    printf("enter  any two num:\n");
    scanf("%d %d", &a,&b);

    printf("the total is %d", a+b);
//
    return 0;
}


// Create a program that swaps the values of two variables without using a third variable.?
#include<stdio.h>
int main()
{ 
     int a=5,b=10;
     // swapping 

              a=a+b; // a is now 15 
              b=a-b; //  b is now  5 
              a=a-b; // a is now 10 

// explanation: first of all we add the both variable value in a single var called a in above and  then we calculate the values as b value is taken by subtraction of a from b which is 10 and b is left only with 5 , and for a we subtract b from a  where b is 5 and a is  left with 10 ;

     /* now in the case of three variabels 
        
         temp=a;
        a=b;
        b=temp;
    
     */
     printf("the swaped number is %d  and %d",a,b)

    return 0;
}
#include<stdio.h>
int main()
{ 
int a=10,b=90;
  
  a=a+b; // 90+10=100 ,   a=100
  b=a-b;// 100-90 =10,   b=10
  a=a-b;// 100-10=90,  a=90

  // code shoudl be in systematic order
  printf("the swapped is a= %d b=%d",a,b)
    return 0;
}




// 3. Check whether a given number is even or odd:
#include<stdio.h>
int main()
{ 
    int a;
    printf("enter a num:\n");
    scanf("%d",&a);
    if (a % 2==0)
    // we can also use  any other data storing   variable instead of 2 we can also use a%a==0

    {
        printf("its a even num\n")
    }
    else
    {
        printf("its an odd num\n");

    }
    return 0;
}

// 4. Find the factorial of a number using a loop:

#include<stdio.h>
int main()
{ 
    int a;
    unsigned long long  factorial=1;
    printf("enter any number");
    scanf(" %d",&a);
    
    if (n>0)
    {
        for (int i = 0; i <=a; i++)
        {
            factorial*=i;
        }
        
    }
    return 0;
}
