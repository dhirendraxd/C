
// a program to calculate tax as of the 

#include<stdio.h>
int main()
{ 
   float tax=0 , income;
   printf("enter your income \n");
   scanf("%f",&income);

   if (income>= 250000 &&income<=50000)
   {
      tax= tax*0.05 * (income - 250000);

   }
   if (income>= 1000000 && income<=1000000)
   {
      tax= tax + 0.20 * (income- 500000);
   }

   if (income>=1000000)
   {
      tax = tax + 0.30 * (income - 1000000);

   }
    
    printf("your net income tax to be paid by 26th of this month is %f \n",tax);

   return 0;
}
// program to find either the given word is lowercase or not 

#include<stdio.h>
int main()
{ 
   char characters;
   printf("enter the character;");
   scanf("%c", &characters);
   if (characters<=122 && characters>=97) ;
          // we can also use the below
          if 
   (characters >= 'a' && characters <='z')

   // This condition checks if the ASCII value of the entered character is less than or equal to 122 (which corresponds to 'z') and greater than or equal to 97 (which corresponds to 'a'). In other words, it checks if the character is within the range of lowercase letters.
   {
      printf("it is lowercase");
   }
   else
   {
   printf("its not a lowercase ");
   }
   return 0;
}