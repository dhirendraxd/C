#include<stdio.h>
int main()
{ 
    int marks[5];

    for (int  i = 0; i < 5; i++)
    {
        printf("enter the value of marks student %d",i+1);
        scanf("%d",&marks[i]);
    }
    for (int  i = 0; i < 5; i++)
    {
        printf("enter the value of marks student %d is %d : \n",i+1, marks[i]);
       
    }
    
    return 0;
}



#include<stdio.h>
int main()
{ 
    int a[3][4],b[i][j],i,j,sum=0;

// enter data for 1st 
    for ( i = 0; i < 3; i++)
    {
        printf("enter number for matrix 1st:\n");
        for ( j = 0; j <4; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

// enter data for 2nd
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("enter data for 2nd matrix:\n");
            scanf("%d",&b[i][j]);

        }
        
    

    // // printing first data
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
        
            printf(" %d\t",a[i][j]);
            sum=sum+a[i][j];
        }

        printf("\n");
    }

    // printing data of 2nd data
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d \t",b[i][j]);
            sum+=b[i][j];
        }
        printf("\n");
    }
    
    printf("the sum is :%d",sum);
    

    return 0;
}


// transpose  of the data input by user
#include<stdio.h>
int main()
{ 
    int matrix[4][5],transpose[5][4]; //The reason for this is that when you transpose a matrix, the number of rows becomes the number of columns, and vice versa. So if the original matrix has 4 rows and 5 columns, its transpose will have 5 rows and 4 columns.
    
    int i,j;
    for ( i = 0; i < 4; i++)
    {
        for ( j= 0; j < 5; j++)
{
    printf("enter the data for  matrix one:");
    scanf("%d",&matrix[i][j]);
}
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            // matrix[i][j]=transpose[j][i]
            transpose[j][i]=matrix[i][j];
        }
        
    }

// printing the transpose
    for ( i = 0; i < 5; i++){
for ( i = 0; i < 4; i++){
 printf("%d \t",transpose[i][j]);

}
printf("\n");
    }
    
    return 0;
}