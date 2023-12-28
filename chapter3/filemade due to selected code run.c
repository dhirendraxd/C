
#include<stdio.h>
int main()
{ 

    int physics,chemistry,maths;
     printf("enter phy num")
     scanf("%d" &physics)

     printf("enter chemi")
     scanf("%d",&chemistry)

     printf("enter maths")
     scanf("%d",&maths)


     total= (physics+maths+chemistry)/3;
     if (total<40 || physics<33||maths<33||chemistry<33)


     {
 printf("your total precentage is %d and you are failed ",total);
     }
     else
     { 
        printf("you are passed and your percentage is %d /n",total );
     }
     
     



    return 0;
}