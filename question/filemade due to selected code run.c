#include <stdio.h>

int main() {
    int n;

    // Define an array list
    int arr[] = {2, 4, 6, 9, 16, 25, 36, 49, 64, 81};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is in the array list and count occurrences without a for loop
    int i = 0, count = 0;
    while (i < size) {
        if (arr[i] == n) {
            count++;
        }
        i++;
    }

    // Display the result
    if (count > 0) {
        printf("%d is in the array list and repeated %d times.\n", n, count);
    } else {
        printf("%d is not in the array list.\n", n);
    }

    return 0;
}
