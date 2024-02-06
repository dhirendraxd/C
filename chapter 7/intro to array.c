#include<stdio.h>
int main()
{ 
    int a[23];
// an 1D array;
// how to print the values of a 1D array
printf("%d",a[14]);
// this will print the element in the 15th place cause of the 0 indexing of the elements  inside "a"

int[4][5]; // 4*5 values storing 20 elements
// this above is 2d array

// the [4]means four lines of [5] values storing box in a variable..

///               [4]four rows and five columns [5]

int a[2][3]={{1,2,3},{4,5,6}};  
// or {{1,2,3},{4,5,6}};
int marks[5][10];
// in each row elements of 10 can be stored 

int a[][3]={9,7};// when using arrays like this this wont make it as a 2D array cause of  values is for only one is set to given and the row is not specified 

float da[2][7];
int i,j;
// while working with arrys (matrix arrays) we have to make i and  j  and if used k variables to ensure no error in the code (compulsory)
for ( i = 0; i <2; i++){
    printf("enter the data for rows ",i+1);// using i+1 is for data visualization for every printf statement for loop .....
    for (float j = 0; j < 7; j++)
    {
        scanf("%d"&da[i][j]);
    }
    
}
// printing the data for the 2d array by user input 
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j< 7; j++)
    {
        printf(" the data are :\n%.2f\n",da[i][j]);
    }
    
}













for ( i = 0; i < 5; i++)
{
    for ( i = 0; i < ; i++)
    {
            
    }
    
}






// how to acess 1D elements..forloop
for (int  i = 0; i < 5; i++)
{
printf("%d",a[i]);
}


    return 0;
}
