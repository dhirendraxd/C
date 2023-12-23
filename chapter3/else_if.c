#include<stdio.h>
int main()
{ 

   int num;
   printf("enter a number from 1 to 3 \n") ;
   scanf("%d", &num);

if (num==1)

{
    printf("you number is 3\n");// is the prompt is right for as it say this will print 
}
   


else if (num==2)
{
    printf("your number is 2\n");// is the prompt is right for as it say this will print 
}
else if (num==3)
{
    printf("your number is 3\n");// is the prompt is right for as it say this will print 

}
else{ // this else is optional  but using it can be good cause its good to add any dialouge at the end rather then leaving it blank

    printf("only 1 to 3 is accepted \n");
    // if any of the above conditions are not met then this will pop up at the terminal 
}
// end of the conditions and now form here begins the new code and conditions


printf("how you doin ");
// let us suppose if the first condition is met then it will execute its code and jump here as same for other conditions

    return 0;
}