
#include<stdio.h>
int main()
{ 
    int  mix[4][3],transpose[3][4],i,j; // i=3,j=4
    int new[3][4];

//  input in matrix 1
    for ( i = 0; i <4 ; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter data:\n");
            scanf("%d"&mix[i][j])
        }
// transposing 
    }
    for ( i= 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            transpose[i][j]=mix[j][i];
        }
        
    }
// printing the tranpose
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("\n%d",transpose[i][j]);
            
        }
// adding new  with transpose 

        for ( i =\ 0; i < 3; i++)
        {
            for ( j = 0; j < 4; j++)
            {
                new[i][j]+=transpose[i][j];

            }
            
        }
// printing  the new datat
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 4; j++)
            {
               printf("%d",new[i][j]);
            }
            
        }
        
printf("\n");
    }
    return 0;
}