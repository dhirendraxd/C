#include<stdio.h>
#include<string.h>

struct student { // this structure is a template which can store  multiple data in it of different items 
    int rollno;
    char name[20];
    float marks;
} s1={23,"dhirendra",3.4}; // we can declare like this also  as many as we want but its not applicable and code seems to be unmannaged 

int main() { 

     // Getting input for student 1

    printf("Enter roll number for student 1: ");
    scanf("%d", &s1.rollno);
    
    printf("Enter name for student 1: ");
    scanf("%s", s1.name);
    
    printf("Enter marks for student 1: ");
    scanf("%f", &s1.marks);
    
    // Getting input for student 2

    printf("\nEnter roll number for student 2: ");
    scanf("%d", &s2.rollno);
    
    printf("Enter name for student 2: ");
    scanf("%s", s2.name);
    
    printf("Enter marks for student 2: ");
    scanf("%f", &s2.marks);





    // storing data in structure is through  strings as below 
// as we have used s1 as a reference we can use any thing for its naming 

    struct student s1 = {101, "John", 85.5};// storing data for student in student structure 

    struct student s2 = {102, "Emma", 90.0};// storing data for  student two in the same previous  structure 
    
    // printf statement should be done by speficiying the exact variable created 

    printf("Student 1\n");
    printf("Roll No: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    
    printf("\nStudent 2\n");
    printf("Roll No: %d\n", s2.rollno);
    printf("Name: %s\n", s2.name); // %s cause name is stored in string as shown above
    
    printf("Marks: %.2f\n", s2.marks);

// ok so we are storing two types of data of two students in a single  structure  
 
//         cause 
    
    //   we created a template that can hold multiple types of data for a single student. Each instance of the student structure (s1 and s2 in your case) can hold the data for one student, including their roll number, name, and marks.

     printf("the roll no is :%d",rollno); 
     printf("the roll no is :%c",name); 
     printf("the roll no is :%f",marks); 
     // this kind of data print wont work cause its a template  for data storing and wont print any data stored in it ........
    return 0;
}
