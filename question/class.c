#include <stdio.h>
#include <math.h>

int main() {
    int n;

    // Define an array list
    int arr[] = {2, 4, 6, 9, 16, 25, 36, 49, 64, 81};

    // Ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is in the array list
    if (n > 0 && sqrt(n)// the sqrt(n) converts the  number inside box for eg.. For example, sqrt(25) would return 5.0 because the square root of 25 is 5.
     == (int)sqrt(n)//this is used to convert the result of the result into an intiger and store without the decimal part 
     ) {
        printf("%d is a perfect square and is in the list .\n", n);
    } else {
        printf("%d is not in the array list or not a perfect square.\n", n);
    }

    return 0;
}

