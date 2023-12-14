#include <stdio.h>
int  main(){
     // scanf is used to  take input from the user and assign it to a variable 
    int a , b ;
    printf("enter the name of a \n");
    //    the below %d is called a format 
    //            the below a is called a variable allocator
    scanf("%d" , &a);
    // the & is used to allocate the location of where the input should be stored  after the user gives the data in the above case it should be stored in a and the  format specifier  if %d cause it is and integer to be converted and stored in  (variable:a)
    printf("enter the value of b \n");
    // after a printf an scanf should be written to get the input from user 
    scanf("%s", &b)
     // in this line of code the scanf take the character value of b  entered by user and assign it to variable b and %s is used to read the   string of characters 
printf("the sum of a and b is %d ", a+b);
    return 0;
    // the format for scanf  is as shown above  with both the format (data reader %d,s,f,c) and (variable allocator or address allocator)
}