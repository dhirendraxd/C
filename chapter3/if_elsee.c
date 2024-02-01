#include<stdio.h>

int main()
{
    int age;
    int vippass=0;
    vippass=1;
    // about the vip pass variable  it works as if i have a vip i can drive even though i a below 18 and above 89 ;

    printf("Enter your age: \n");
    scanf("%d", &age);


// the below code is a condition where age above 18 and below 89 can drive but below 18 and above 89 wont be able to drive as of the else statement which is   printf("You cannot drive.\n"); will be printed

// !(vippass=1)) about the (not) (!)  this change the statement if the condition is true it will be false and false will be true  // as if " sach ko jhut aur jhut ko sach banadena wala  ko kya keheta ha not operator "

    if (age >= 18 && age <= 89 || !(vip pass==1))


    // the (and) &&  is used to combine two or more  conditions in  a way that the entire expressions evalutes to true only if all the individuals are true(will work if only both of the conditions are true either it wont work )

     //the  (or) ||  is  a logical operator that combines multiple conditions and the entire expressions is true if at least on of the condition is true (will work if only one condition is true  no need of both to be true only one can work)
     {
        printf("You are above 18, and below 90, so you can drive.\n");
    }
     else
      {
        printf("You cannot drive.\n");
    }

    return 0;
} 



// draft code for future use 

if(age==3,4,53,534,3)// this is not a valid code

// if we want to make more  values the we can also use  as below
    if (age == 3 || age == 4 || age == 53 || age == 534 || age == 3)
// if "if" executes then else wont  and viceversa
{
    printf("is the above code valid ")
}
else
// if else execute then if wont and viceversa
{
    printf("heyy you made it to end ")
}

