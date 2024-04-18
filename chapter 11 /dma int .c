#include<stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
      // malloc give un allocated memeory and provides memeory not in an  garbage values can be inside a variables 

    printf("the size of my int is  %d",sizeof(int)); // this shows what is the size of out int in our pc 

    ptr=(int *)malloc(6*sizeof(int)); // multply the size by 6 to make space for 

// the int * denotes that or it tells that its a intiger  pointer  being held for memeory

// the malloc give memeory for the numebr they have want by  : 6 * 4 =24 

    ptr [0]=11;
    ptr[1]=29;
    ptr[2]=12;
    ptr[3]=52;
    ptr[4]=53;
    ptr[5]=64;
 
 for (int i = 0; i < 6; i++)
 {
    printf("the values  sotred in those are :%d\n",ptr[i]);

 }

 free(ptr); // freeing the allocated memeory
  
   ptr=(int *)malloc(5*sizeof(int));
   // hence the variables are not made and are empty 
   for (int i = 0; i < 5; i++)
 {
    printf("the values  sotred in those are :%d\n",ptr[i]);
 }

frea(ptr);



 ///         calloc
 int *callptr;
 callptr=(int *)calloc(6,sizeof(int));
 // the main work for calloc is to initialize 0 in all the  variables  overflow and under flow of memeory is saved from this 
    ptr [0]=11;
    ptr[1]=29;
    ptr[2]=12;
    ptr[3]=52;
    ptr[4]=53;
    ptr[5]=64;
 for (int i = 0; i < 6; i++)
 {
    printf("the values  sotred in those are :%d\n",callptr[i]);
 }
 free(callptr); // freeing the allocated memeory


// reallocating using same pointer  by freeing or to the reamining memory 







return 0;
}