// make a program in c to add 2 intigers 
#include <stdio.h>
int main(){
    int addin=7;
    int addin1=74;

 printf("the adding result of addin is %d \n" , addin + addin1);
 return 0;
}

// calculating the are of a rectangle 
#include<stdio.h>
int main()
{ 
int length =4, breadth=9;
int area=length*breadth;    
printf("the area of this rectangle  is %d", area);
    return 0;
}

 // next exe same season
#include<stdio.h>
int main()
{ 
    int length, breadth;  
    // an empty variables should be made  to store the afterward  inputs given by users 

printf("what is the length of the rectangle \n");
scanf("%d ", &length);
// the above printf displays the  result based on  the above scanf function and as of the input is taken the variables are assigned the input ans at the end output is shown 

    printf("what is the breadth of the rectangle \n ");
    scanf("%d ", &breadth);
// same for this data is taken and allocated to the breadth  and  output is  printed 

    printf("the are of your triangle is %d ", length*breadth);

    return 0;
}

// new exe pi 
#include<stdio.h>
int main()
{ 
int radius =4;
float pi=3.42;
// counting the value of a circle 
printf("the are of this circle is %f \n" ,pi*radius*radius);
// as previously said the value  is converted and allocated to the specific kind 
int height =8;
printf(" the volume of this cylinder is %f \n" ,pi*radius*radius*height);
// after declaring a variable we can add the vari  inot our printf functions as shown above which  does addsup  in our block of code 
    return 0;
}

//exe 3 temp 
#include<stdio.h>
int main()
{ 

float celsius=34, far;
far  =(celsius * 8 / 5) + 32;
// while the maths of above os celsius and 8 and 5 divide occurs the value for far is accumulated  and 32 is added in them in this process

printf("the value of this celsius temperature is in fahrenheit is %f", far);
    return 0;
}

// exe 4
#include<stdio.h>
int main()
{ 
int principal=8,rate=9,years=3;
int simpleInterest =(principal*rate*years)/100;
printf("the vlaue of simpleInteres is %d",simpleInterest);
    return 0;
    // a simple interest to calculate the rate of interest  using si units in maths 
}