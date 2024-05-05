#include<stdio.h>

// Function declaration
void printage(int age);

int main() {
    int age = 32;
    int *pAge = NULL;
    pAge = &age;
    
    // Printing the address of age
    printf("Address of age: %p\n", &age);
    
    // Printing the value of pAge (address of age)
    printf("Value of pAge: %p\n", pAge);
    
    // Printing the value of age
    printf("Value of age: %d\n", age);
    
    // Printing the value stored at the address pointed by pAge
    printf("The value stored at address: %d\n", *pAge);
    
    // Printing the size of age
    printf("Size of age: %d bytes\n", sizeof(age));
    
    // Printing the size of the value pointed by pAge
    printf("Size of the value pointed by pAge: %d bytes\n", sizeof(*pAge));
    
    // Function call
    printage(age);
    
    return 0;
}

// Function definition
void printage(int age) {
    printf("You are %d years old\n", age);
}


#include<stdio.h>

int main(){
    // opend a file in the same directory 

FILE *Pf=fopen("tezt.txt","w");

fprintf(Pf,"spongebob is my name ");

fclose(Pf);

return 0;
}
#include<stdio.h>

int main(){
    FILE *hey=fopen("dhirendra.txt","r");
    char buffer[532];
    if (hey==NULL)
    {
        printage("unable to creat file ");
    }
    else{
  while (fgets(buffer,455,hey)!=NULL)
  {
    printage("%s",buffer);
  }
    }

    fclose(hey);
return 0;
}