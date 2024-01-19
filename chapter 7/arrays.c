#include<stdio.h>
int main()
{ 
    //eg.
    // int marks1, marks2,marks3;


// if we want to store same kind of data in a variable we use arrays as below.


//      int marks [4];
//      marks[0]=23;
//      marks[1]=23;
//      marks[2]=12;
//      marks[3]=29;

// printf(" your score is %d",marks[0]);



 int marks [4];
 printf("enter value of marks for student 1\n");
 scanf("%d", &marks[0]);
 printf("enter value of marks for student 2\n");
  scanf("%d", &marks[1]);
 printf("enter value of marks for student 3\n");
  scanf("%d", &marks[2]);

 printf("enter value of marks for student 4\n");
 scanf("%d", &marks[3]);
 printf("you have entered  : \n %d \n%d \n%d and\n %d ",marks[0],marks[1],marks[2],marks[3]);

printf("the value of marks1 is :%d",marks[1]);
//   now the integer or variable mark[1] will store the given data:.....




 // using loop 
  for (int  i = 0; i < 4; i++)
  {
    printf("the overall grade for student  %d : %d \n ", i+1 ,marks[i]);
 }
  
    return 0;
}