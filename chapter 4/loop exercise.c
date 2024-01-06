#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter a number to get its multiplication table: ");
    scanf("%d", &number);

    // Print the multiplication table
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

//
#include<stdio.h>
int main()
{ 
for ( int i = 10; i; i--)
{
    printf("10 x %d = %d", i,10*i);
}
    return 0;
}

//
#include<stdio.h>
int main()
{ 
    int i=1 ,sum=0 , n=10;
    while (i<=n)
     // this is a condition in c  which shows that i is less then or equal to n where n value is 10 and i's is 1
    {
        sum+=1;
        i++;
        printf("the value fo sum is %d" , sum);
    }
    printf("the value of sum (1 to 10) is %d", sum);
    return 0;
}
