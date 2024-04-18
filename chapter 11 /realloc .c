#include<stdio.h>

int main(){
    
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    printf("enter numbers: ");
    for (int i = 0; i < 5; i++)
    {
        printf("here \n");
        scanf(" %d",&ptr[i]);
    }
    
//   after freeing the memeory the space will be empty and then its data will be written in it after printing the previous data of it will then only after print data of other reallocated 8 
    // reallocating  8 in the previous pointer 
    ptr=realloc(ptr,8);
    printf("enter numebr(8);");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d",&ptr[i]);
    }
     

     // printing the data 
     for (int i = 0; i < ; i++)
     {
        printf("the data of %d is %d",i,ptr[i]);
     }
     
    
return 0;
}