#include <stdio.h>

int main() {
    // Declare a 3D array
    int array3D[2][3][4]; // Dimensions: 2x3x4

    // Nested loops to input data into the 3D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("Enter data for element at position (%d, %d, %d): ", i, j, k);
                scanf("%d", &array3D[i][j][k]);
            }
//so for as many  dimensions of array we made we  add that much amount of nested loop in the program 
        }
    }

    // Nested loops to print the data in the 3D array
    printf("The data in the 3D array are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("%d ", array3D[i][j][k]);
            }
//so for as many  dimensions of array we made we  add that much amount of nested loop in the program 
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}  
/* 
        For example:
        For a 1D array, you would have one loop.
       For a 2D array, you would have two nested loops.
     For a 3D array, you would have three nested loops.
    And so on.

*/
