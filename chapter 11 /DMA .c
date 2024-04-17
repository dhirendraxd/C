#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;  // Declare a pointer to int

    // Allocate memory for 5 integers
    ptr = (int *)malloc(5 * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit the program with an error code
    }

    // Initialize the allocated memory with some values
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    // Print the values stored in the allocated memory
    printf("Values stored in dynamically allocated memory:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", ptr[i]);
    }

    // Free the dynamically allocated memory
    free(ptr);

    return 0;  // Exit the program successfully
}
