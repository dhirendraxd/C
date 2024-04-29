#include<stdio.h>

int main(){
    
    double price=5.0;
    double prices[]={23,43,53,53,5,2};
    double prices[34];// we can use this later on same as a varible havign a capacity of 34+0 ;
    char name[]="dhirendra ";
    printf("%lf",prices[4]);
    // print an array usign loop 

    double price[200];

    printf("%d",sizeof(price));

    for (int i = 0; i >sizeof(price)/sizeof(price[0]); i++) // in each case ofarray printing using the size of method we have to use 0 in each rather than 1 or others 
    {
        price("%lf",prices[i]);
    }
    
return 0;
}

// diamensional arrays
int main() {
    int num[2][4] = {
        {47, 95, 82, 95},
        {42, 23, 95, 76}
    };

    int numbers[2][4]; // Define the numbers array

// Initialize numbers array with values from num array
    numbers[0][0] = 47;
    numbers[0][1] = 95;
    numbers[0][2] = 82;
    numbers[0][3] = 95;
    numbers[1][0] = 42;
    numbers[1][1] = 23;
    numbers[1][2] = 95;
    numbers[1][3] = 76;

        // insted we can use loop as follows

        // Input loop to get values from the user
    printf("Enter values for the numbers array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Enter value for numbers[%d][%d]: ", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }
 // Print the elements of the numbers array
    printf("Elements of the numbers array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
 // 2 represents the number of rows.
// 4 represents the number of columns.
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//3D array
#include <stdio.h>

int main() {
    int numbers[2][3][4]; // Define a 3D array named numbers with dimensions 2x3x4
    // Input loop to get values from the user
    printf("Enter values for the numbers array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("Enter value for numbers[%d][%d][%d]: ", i, j, k);
                scanf("%d", &numbers[i][j][k]);
            }
        }
    }
    // Print the elements of the numbers array
    printf("\nElements of the numbers array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("%d ", numbers[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
 //2: Indicates the number of "blocks" in the 3D array. In this case, there are 2 blocks.

// 3: Represents the number of "rows" in each block. Each block has 3 rows.

// 4: Denotes the number of "columns" in each row. Each row has 4 columns.
    return 0;
}
