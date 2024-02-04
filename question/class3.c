// wap to enter  elements in two 3*3 matrix and display the sum of them ??
#include <stdio.h>

int main() {
    // Define two 3x3 matrices
    int matrix1[3][3], matrix2[3][3], sum[3][3];

    // Input for the first matrix
    printf("Enter elements for the first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

// two loops are used to store data in a matrix aray of two or more 
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("\nEnter elements for the second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum matrix
    printf("\nSum of the matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("\n %d \t", sum[i][j]);
        }
      printf("\n");
    }
    return 0;
}