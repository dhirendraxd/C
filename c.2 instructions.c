// type declaration  instructions 

#include<stdio.h>
#include <math.h>
int main()
{    
     // if :
     let a =38; 
     v=c=g=a 
     // the value of v c and g would be the same  value as a consist of  which is in this case is 38

     int a,b,c;
     b=c=a=47;
     // now the value of b ,c and a is 47 as we can assign a single input to multiple variables 

    printf("the valur of b is %d ",b);
    printf("the value of a is %d", a);
    printf("the value of  c is %d ",c);

float a =1.1;
float b=a+9.8;
// we can add a variable in a variables as above and it wont show any errors and the instruction in c  should be written in a sequence without missing  either it will show errors later on .. as above if we write 1.1 later  and write b=a+9.8 then it will show errors cause of its sequence 

printf("the value of c is %f \n ",a);
    return 0;
}

// arithmetic instructions 

#include<stdio.h>
int main()
{ 
    //
int a =4;
int b =5;
int z=b+a;
// we can also add two variables in a line and then print it but b + a = z; its a error code isn't possible  

printf("the value of z is %d \n" ,z);
printf("the value of a * b is :%d\n ",a*b);
printf("the value of a / b is :%d\n ",a / b);
printf("the value of a + b is :%d\n",a+b);
printf("the value of a - b is :%d\n ",a-b);
// we can add sub , dic and somplify  as above  and : is not mandatory  we can use it or remove as we want 

printf("when divided by 2  it leaves a reminder of %d \n ",5%2);
printf(" when -5  divided by 2  it leaves a reminder of %d \n ",5%-2);
printf("when divided by 2  it leaves a reminder of %d \n ",-5%2);
// in c we dont assume any thing  to let computer assume by itself we always have to  give proper command 
printf("the value of 4 to power 5 is %f\ n",pow(2,5));
// so if we want  to get the power of any number we can put them inside pow( ) and get the value of them 


// type conversion 
int a =3.5;
//in this case 3.5 which is a float will be denoted to 3 because a is not able to store floats  cause int is  used to store data in a single form not in decimals 
int r=3.0/9;
printf("the val of r is %f  \n");

float a=8;
// in this a will store 8.0 cause float is used to store decimal value so even if we give a single digit to it it will always  give 8.0  


    return 0;
}