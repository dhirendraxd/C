// #include<stdio.h>
// int main()
// { 
//  int age=0;
  
// printf("enter your age: \n");;
// scanf("%d ", &age);

// printf("your age is %d \n", age);
// // in this above code we  give a prompt to user to enter their age  and scanf helps to convert and store data in age variable and later on while  the value for age is printed we can get whatever the value we have given
//     return 0;
//     }

// #include<stdio.h>
// int main()
// { 
// int age;
// printf("enter your age \n");
// scanf("%d", &age);

//     if (age>100)
//     {
// (
// "you are not eligible to live "
// );
//     }
//     else{
//         printf("your are eligible to die peacefully");
//     }
    
// //
//     return 0;
// }
// #include<stdio.h>
// int main()
// { 
// int a,b,c,d;

// printf("enter your login for a \n");
// scanf("%d",&a);

// printf("enter you login for b \n");
// scanf("%d",&b);

// printf("enter the valu for c \n");
// scanf("%d",&c);

// printf("enter the word for d\n");
// scanf("%d",&d);
 
//  printf("thanks for the info \n");
//  printf("a: %d \n",a);
//   printf("b: %d\n", b);
//     printf("c: %d\n", c);
//     printf("d: %d\n", d);

//     return 0;
// }

// #include<stdio.h>
// int main()
// { 
// int age;
// printf("enter your  age mate!!  ");
// scanf("%d",&age);
//  if (age>=90)
//  {
//     printf("ayy yo wtf you doin \n");
//  }
 
//  else{
//     printf("you been doin nice \n");
//  }

//     return 0;
// }

// //

// // the below program shows the grade as of the prompt from user 

// #include<stdio.h>
// int main()
// { 
// int grade;
// printf("enter your grade:");
// scanf("%d",&grade);

// if (grade>100)
// {
// printf("invalid grade ");
// }
// else if (grade>90)
// {
//     printf("A \n");
// }

// else if (grade>80 &&grade<=90)
// {
//     printf("B\n");
// }
// else if (grade>70 &&grade<=80)
// {
//     printf("C\n");
// }
// else if (grade>60 &&grade<=70)

// {
//     printf("D\n");

// }
// else if (grade<70)

// {
//     printf("you fail bro\n");
// }

// else{
//     printf("nerd\n");
// }
//     return 0;
// }

#include<stdio.h>
int main()
{ 

int physics,chemistry,maths;
float total;

     printf("enter phy num");
     scanf("%d", &physics);

     printf("enter chemi");
     scanf("%d",&chemistry);

     printf("enter maths");
     scanf("%d",&maths);

     total= (physics+maths+chemistry)/3.0;
/*used 3.0 cause later on while we total the percentage of all the subs then it will be in a an decimal value so using float value before can make a huge change  (to remember)  ::
Separate Declaration and Initialization:
 float total;
 total = (float)(physics + maths + chemistry) / 3.0;


 Single Line Declaration and Initialization:
float total = (float)(physics + maths + chemistry) / 3.0;
 
  as of these two methods  the seperate declaration is easier and  shoudl be used more
*/ 
     if (total<40 || physics<33||maths<33||chemistry<33){
        // the above|| is to be discussed
 printf("your total precentage is %f and you are failed ",total);  }
     else
     { 
        printf("you are passed and your percentage is %f /n",total );
     }
    return 0;
}
