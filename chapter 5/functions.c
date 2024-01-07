#include<stdio.h>
void display();

int main()
{ 
int a ;
printf("initializing dispaly function");
display();
printf("dispaly function finished its work ");

    return 0;
}
void display()
{
    printf("this is dispaly ");

}


// function 2
#include<stdio.h>
void clasher ();
void clasher2();

int main()
{ 
clasher();
clasher2();
    return 0;
}

void clasher(){
    printf("hey this function one ");

}
void clasher2(){
    printf("this is function 2");
}