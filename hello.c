#include <stdio.h>
int main(){
   // we should always write all the above things from intmain (){}  and return part also cause its the structure of c .
    char character='h';
// char is used to declare only one character inside cause it can only store one 
    char mystring[]= "hello to the characters";
    //the [] after the variable mystring is used to store multiple characters inside it 

     int clasher=20;
    // the int variable  is used specifically  for number and nothing else 

    float clasher=84.4f;
//Use float when you need to conserve(it occupy 4bytes ) memory, and the precision of about 7 digits is sufficient.

     double Clasher=74; //widely used and should start to use it 
//Use double when you need higher precision (about 15 digits) or a larger range of values and it allocates  about the twice the amount of memory in ram upto 8bytes.
    printf("this is my first code in c ");
    return 32;
    
}
