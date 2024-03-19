#include<stdio.h>
int main()
{      // things to remember that  theres a null character at the end of the string by itself we dont have to  initialize it and we can also initialize  by our self

     // it takes up a values in memory and  have its adress in a variable ......

    char str [] = {'d','h','i','r','e','n','\0'};
    char str [] ="dhirendra"; // in this the null character is already written   
             // str+1 =dhirendra+\0

// Both of the str var prints the same values and its the easier way to print and store values in  a variables....

// '\0' = is a null character it is automatically added up 

// for example  if we have 
 char hey[23]={'1','2','4','23','\0'};
  // now in the remaining  17 empty place of this variable   we will get any random garbage value auto generated 

   
    // the format specifier for string is %s

    
    return 0;
}