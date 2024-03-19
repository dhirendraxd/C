#include<stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{ 
    char name[34]; // always remember to makeup space for a null character in strings 
    printf("enter any words");
    // gets(name);


    fgets(name,sizeof(name));
// using gets can cause overflow of the data to bestored in the string  , so we use fgets for our use its more reliable and safe
 
      // points to remember 
    //   . ok so will using fgets take values along with spaces 
    // . the new line will also take a placevalues inside a strings array

scanf("%5s",name);
// now th scanf will only store data of the first 5  and will not store the values after the 5  

// usefull when we want specific letter or numbers input from user  

    printf("%s",name);
    return 0;
}