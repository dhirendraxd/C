
#include<stdio.h>
void clasher ();  // Declaration 
// the function should be declared firstly and then written its function later on , so that it clearly clears the upcoming functions ...
int main()
{ 

// function call 
clasher();


    return 0;
}

// function defination 
void clasher(){

    // function body
    printf("hey this function one ");
    printf("how you doin ");
}



// exe 1

#include<stdio.h>


void hello();
void goodbye();

void hello(){
    printf("hi")
    goodbye();
}

void goodbye(){
    printf("hello")
}


int main()
{ 
    hello();
    goodbye();
    hello();
    // we can call an function multiple times  
    return 0;

}





// 

#include<stdio.h>
void namaste();
void bonjur();


int main()
{ 
printf("press i for namaste and b for french :");
char word;
scanf("%c",&word);


//conditionals
if (word=='i' && word=='t' ) //  using '&&' only execute when both the conditions are true 

// so we use ||  if we want code to be executed even though one of the condition is true

// (strstr(word, "i") != NULL && strstr(word, "t") != NULL)   this kind of and statement is used when we use a character selection from a string of character entered by user 
{
    namaste();
}

else{
    bonjur();
}
    return 0;
}

 
 void namaste(){
    printf("namaste\n");

 }
 void bonjur(){
    printf("bonjur \n ");
 }