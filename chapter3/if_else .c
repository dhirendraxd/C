#include<stdio.h>
int main()
{ 
int age;
printf("enter your age \n");
// we request age and scanf does it works of converting and addressing the data
scanf("%d", &age);
    // we request age form the user its like age=pompt; and later on the number is converted into string by parseInt(age) and now the if else statement works 
    if (age>70){
        // (age>70)the above tells is the age is above 70 then  you are a retard prints
        printf("you are a retard");
        // if (age>=70) then only the age of 69 are eligible for being a retard
    }
    else{
        //if the age is less then 70 then you are not a retard prints 
        printf("you can you are not a retard ");
    }
    printf("random \n");
    return 0;
}