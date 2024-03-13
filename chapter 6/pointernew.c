#include<stdio.h>
int main()
{
int a=10;
int *new=&a;// now new store values and adress of  a  and even new has its own value and adress 
int y=*new;// y  now contains the value of new making y a new variable which store value of new init 

     printf("the value of a is :%d\n",&a);// its incorrect but 
    //  When you use the %d format specifier to print the address of a variable, you're interpreting the address as an integer and printing it in decimal format. This may result in a large number like 6422296 that doesn't resemble a typical memory address.

     printf("the adress of a is also printed by new which is   :%p\n",new);    //ok so to print the actual address of  new   is by &new 

     // it also prints the adess of a 

     printf("the adress of a is :%p\n",&a);
      // its value if 0061FF14

     printf("the adress of a is :%x\n",&a);
     // prints the value in hexadecimal 

     printf("the value of a acessing through  new is :%d\n",*new);
     // to acess the value of a is through %d and  we should specify for  *new 


     printf("the adress  of new is  :%p\n",&new);// it prints the adress of new 
     // to prints the adress we use & for the variables 

     printf("the thing new store is of  :%x\n",new);
     // to see what does the pointer stores is just =(new)



     printf("the address of new is: %p\n", (void *)&new); // not necessarly to use it but can be usefull 

    return 0;

}