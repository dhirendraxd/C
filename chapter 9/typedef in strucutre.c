#include <stdio.h>

typedef struct studentsofengineering
// in short typedef is a  nickname for strucutre and we can call and use it as the main programs refernce
{
    int rollno;
    char name;
    float idnum;
} voe; // now this voe can be used to call the struct funtion instead of the full name studentsofengineering we can use or call it by voe

// Define a structure named studentsofengineering and create an alias voe for it

int main()
{
    struct studentsofengineering s1 = {"hi"} // normal method without shorthand

    // You can declare variables of type voe to create instances of the structure
    voe s1;
    voe s2;

    // Initialize members of s1
    s1.rollno = 123;
    s1.name = 'A';
    s1.idnum = 1234.56;

    // Initialize members of s2
    s2.rollno = 456;
    s2.name = 'B';
    s2.idnum = 7890.12;

    // Access and print the values of members of s1
    printf("s1.rollno: %d\n", s1.rollno);
    printf("s1.name: %c\n", s1.name);
    printf("s1.idnum: %.2f\n", s1.idnum);

    // Access and print the values of members of s2
    printf("s2.rollno: %d\n", s2.rollno);
    printf("s2.name: %c\n", s2.name);
    printf("s2.idnum: %.2f\n", s2.idnum);

    return 0;
}

//
return 0;
}