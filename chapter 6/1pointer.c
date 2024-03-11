#include<stdio.h>
int main()
{ 
     int age=89; // carefull while using data types and printing them may cause errors using char and int for and not printing it using the right specifirer 
       int *pAge=&age; //ok so the pointer age will now save both the value and address of the age right 

         printf("the value of age is :%d",age);
         printf("the adress of age is :%p",&age);
         printf("size of age is :%d \n bytes ",sizeof(age));
         printf("size of page is :%d \n bytes ",sizeof(*pAge));



          printf("the value of age is :%d",age);
           printf("the value of page is :%p",pAge);
         printf("the vaules stored ar adress :%d\n",*pAge);// dereferencing 
    return 0;

    // sample code: bro code


#include <stdio.h>

void printAge(int *pAge)
{
   printf("You are %d years old\n", *pAge); //dereference
}

int main()
{
   // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
   //           some tasks are performed more easily with pointers
   //           * = indirection operator (value at address)

   int age = 21;
   int *pAge = &age;

   printAge(pAge);
   
   printf("address of age: %p\n", &age);
   printf("value of pAge: %p\n", &pAge);
   printf("size of age: %d bytes\n", sizeof(age));
   printf("size of pAge: %d bytes\n", sizeof(pAge));
   printf("value of age: %d\n", age);
   printf("value at stored address: %d\n", *pAge); //dereferencing

   return 0;
}

