#include<stdio.h>
int main()
{ 
// we can use loops and other conditional inside switch with each case 
 int rating;
 printf("enter your rating (1-5)\n")
 scanf("%d", &rating);
 switch (rating) {
 case 1:
 // the case should always be in numbers and should be sequence wise written so that it would be easier to read data init 
 printf("your rating is 1");
break;
  case 2:
 printf("your rating is 2");
break;
 case 3:
 printf("your rating is 3");
break;
 case 4:
 printf("your rating is 4");
break;
 case 5:
 printf("your rating is 5");
break;
 default:
 printf("invalid rating");
break;
// if we want more rating case then we have to add more case init and assign them a prompt 
 }
    return 0;
}


// this is a line for comment 
#include<stdio.h>
int main()
{ 
  int minority;
  char minor;
  char answer[2];
  printf("enter y for yes n for no with age ");
  scanf("%c %d",&minor,&minority);
  if (minor=='y' && minority<=17)
  {
    switch (minor)
    {
    case 16:
    // so i have used if age==16 then print call me but using switch statement we can make case for all the ages as of mine there would be form 17 to 1 so we can have 17 cases is we wanted ...
    {
      printf("call me \n")
    }
      break;
    case 15:
    {
      printf("contact me\n ")
    } 
    break;
    // the case 14 act like if age 14 so we can use switch indeed...
    case:14 
    {
      printf("do you know one thing \n");
      printf("chose a or b \n");
      scanf("%c",&answer);
    //   if (answer=='a')
    //   {
    //     printf("dont know what you been looking for \n")
    //   }
      
    // }
    // break;
    // case 4:if (answer=='b')

    // {
    //   printf("i remember when i first\n ")
    // }
    switch (answer[0])
    {
    case 'a':
    printf("you dont know why you been looking for ");

      break;
    case 'b':
    printf("i remember when i first .....");
    break;
    default:
    printf("invalid choice");
      break;  
      }
    break;
    default:printf("thank for talking kid\n ");
      break;
    }
  }
  else{
    printf("come again ");
  }
  return 0;
}

