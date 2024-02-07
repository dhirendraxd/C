#include <stdio.h>

int main() {
    // Declare and initialize a 2D array
    
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing specific elements
    printf("Element at row 0, column 0: %d\n", matrix[0][0]);  // Output: 1
    printf("Element at row 1, column 2: %d\n", matrix[1][2]);  // Output: 6
    printf("Element at row 2, column 1: %d\n", matrix[2][1]);  // Output: 8

    return 0;
}
