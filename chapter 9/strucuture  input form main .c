#include <stdio.h>
struct class
{
    int rollno;
    char name[84];
    char subject[20];
} s3 = (3); // ok for this we will be storing 3 in roll no and other space will be left blank...... we can also do s3 = {3, "", ""};  this instead but the previous works fine

 and if we store an character in a int it wont store it in any place  , string for string and intiger for intiger 
   

    struct class s1;
 struct class s2 = {2, "hitesh ", "sceine"};
 // we can also  put this up here

 int main()
 {
     struct class s1;
     struct class s2 = {2, "hitesh ", "sceine"};
     s1 = s2; // all the values of s1 will be copied to s2 ....

     printf("Enter data for s2 (name): ");
     scanf("%s", s2.name); // we always use %s while stroring and printing the strings
     printf("the subject for s2 is :%s", s2.subject);

     if (s1.rollno < s2.rollno)
     {
         printf("s1 is less then s2 \n");
     }

     return 0;
 }