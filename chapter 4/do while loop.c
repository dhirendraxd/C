#include<stdio.h>
int main()
{ 
    int a =0;

    do
    {
        printf("the enterd value of a is %d",a);
        a++;
        // and other  commands  codes 
        // and other commands codes 
    } while (a>20);

// do while looop executes at least once
    
    // The key feature of a do-while loop is that it guarantees the execution of the loop body at least once, even if the condition is false from the beginning.

    // firstly it runs at least once then checks the given condition 
    return 0;
}

// quizz
#include<stdio.h>
int main()
{ 
        int a=0;
        int n;
        printf("enter the value of n ")
        scanf("%d",&n)
        do
        {
            printf("the natural number are %d",a);
            a++;
                  } while (a<=n);
// in this program we can also print 1 to 10 without the scanf function ,by declaring a as 0 and writing a condition as a<=10 (the = is to print all the numbers upto 10 not till 9)

    return 0;
}

.//
