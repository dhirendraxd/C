#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){ 
    int number,guess, nguess=0;
    srand(time (0));
    //srand(time(0));: This sets the seed for the random number generator based on the current time. By using time(0), you ensure that each time you run the program, the seed is different, leading to a different sequence of random numbers.

    number=rand() %100 + 1 ;
// rand(): This function returns a pseudo-random integer (the %100 identifies to give a number inside 100 we can customize it as of our need ) .

// % 100: The modulo operation restricts the number to a range between 0 and 99.(it doesnot let the number exceed above 99 and lagging behind 0)...

    // + 1: Adding 1 shifts the range to 1 to 100.(so it makes 0 +1 and 99 +1 which add the value upto 100 and makes it less then 1)..

    // generated random number between 1 to 100...
    printf("the number is %d \n ",number);
    do {

      printf("guess the number between 1 to 100\n" );
      scanf("%d",&guess);
// this asks the user for the number guess he want to go with and if not right he will be redirect again in this case cause of do while loop used outside of it ...




      //form here 
      if (guess>number){
        printf(" the lower number please  \n");
      }
      else if (guess<number)
      {
        printf("higher number please \n");
      }
      // to here 
// this  conditions shows either the entered number by user is a lower or higher number




      else
      {
    printf("you guessed it in %d attempts \n",nguess);
      }
      // this is a separate else with a  display for how many aatempts dose it take to guess the number ...


      nguess++;
      // this increament value is increased each time a loop runs ....

      }  while (guess!=number);
       //The loop continues until the user's guess is equal to the randomly generated number as in above the number is != number...

        //(its values is given by a random integer generator and the value of guess is given by the user as an input )...

    return 0;  }