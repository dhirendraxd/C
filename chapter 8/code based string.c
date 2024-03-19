#include<stdio.h>
int main()
{ 
    char name[23]="dhirendrasingh";
    printf("enter the name;\n");
    fgets(name,sizeof(name));
    printf("the given name was :%.5s",name);
// now the above printf will only print the 5 characters form the variables 

    puts(name);
// same as printf 
    puts(name);
printf("%s",name[5]);  // will print the characters above 5 and will only stop when it  gets till a null values 
    return 0;
}