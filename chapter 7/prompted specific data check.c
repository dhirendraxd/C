#include <stdio.h>

int main() {
    // Declare a 2D array
    int matrix[3][3];
    int i,j;// cause we used nested loop 
    int hey, kxa; // cause we have to store data for row and cols  

    // Input data into the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter data for element at row hey, column kxa: ");
            scanf("%d", &matrix[i][j]);
        }
    }

    // Prompt user for hey and kxa indices of the element they want to access
    printf("Enter the hey index: ");
    scanf("%d", &hey);
    printf("Enter the kxa index: ");
    scanf("%d", &kxa);

    // Access and print the specific element
    printf("The element at row %d, column %d is: %d\n", hey, kxa, matrix[hey][kxa]);
    // we have to place the right  variables storing the row and cols data and place it as above  matrix[hey][kxa])  and machine will figure other things out 


    return 0;
}


