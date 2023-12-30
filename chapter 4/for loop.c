#include<stdio.h>
int main()
{ 
    for (int i = 0; i <223; i++)
    {
        printf("hey how you doin %d",i);
    }
    
    return 0;
}




// "++" infinite loop 

#include<stdio.h>

int main() {
    for (int i = 0; ; i++) {
        printf("Hey, how you doin' %d\n", i);
    }

    return 0;
}



// infinite loop in minus numbers
#include<stdio.h>

int main() {
    for (int i = 0; ; i--) {
        printf("Hey, how you doin' %d\n", i);
    }

    return 0;
}





// a infinite loop break

#include <stdio.h>

int main() {
    int counter = 0;

    for (;;) {
        printf("This is an infinite loop. Iteration: %d\n", counter);

        // Increment the counter
        counter++;

        // Check if we should break out of the loop after 10 iterations
        if (counter >= 10) {
            printf("Breaking out of the loop.\n");
            break;  // Exit the loop
        }
    }

    return 0;
}

// keep using <= or >= to execute the whole number upto last numbers 





//quiz
#include<stdio.h>
int main()
{ 
    int n;
    printf("enter the value of n ");
    scanf("%d" &n,)
    for (int  i = n; i; i--)
    // can also use <=0; insted of the i; but using it can remove excessive confusion 
    {
        printf("the reverse numbers are %d",i);
            }
    // break statement
    
    return 0;
}