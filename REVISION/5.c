#include<stdio.h>
#include <string.h>
int main(){
    char cars[][2]={"hey"};
    strcpy(cars[0],"kya hal chal");
    for (int  i = 0; i <sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n",cars[i]);
    }
    // swap varibales of 2 variables 
    char x[10]='water';
    char y[10]='lime';
    char temp[60];
    // temp=x;
    // x=y;
    // y=temp
    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);


    printf("x=%c",x);
    printf("%c\n",y);

// sorting an arrya
void sorting(int array[],int size){
    for (int i = 0; i < size-1 ; i++)
    {
        for (int  i = 0; j < size-1; i++)
        {
            if (array[j]>array[j+1])
            {
            int temp= array[j];
            array[j]=array[j+1];
            array[j+1]=temp;    
            }
            
        }
        
    }
    
}
void printing(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d",array[i]);
    }
    
}

int array[]={5,3,42,4,25,42,4};
int size=sizeof(array)/sizeof(array[0]);
sorting(array,size);
printing(array,size);



// struct
struct player
{
char name="dhiren";
int age=20;
float kdratio=23.4;

};
struct player p1;
struct player p2;

// player 1
strcpy(p1.name,"hitesh");
p1.kdratio=12.3;

// player 2
strcpy(p2.name,"ram");
p2.kdratio=4.5;

printf("%s",p1.name);
printf("%f",p1.kdratio);

printf("%s",p2.name);
printf("%f",p2.kdratio);
return 0;
}




// type def 
#include <stdio.h>

// Define a structure named studentsofengineering and create an alias voe for it
typedef struct studentsofengineering {
    int rollno;
    char name;
    float idnum;
} voe; // the voe in this is a nickname cause the use of typedef is  to give a nickname toh struct ....

int main() {
    // Declare variables of type voe to create instances of the structure
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
