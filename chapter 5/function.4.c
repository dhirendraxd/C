#include<stdio.h>
int sumofnumbers(int a, int b);
// int is used when we want a function to return a value 

int sumofnumbers(int a, int b){ // can also use x and y for a and  b 
int x=a+1;// shoudl declare it as a variable in this kind a scenes 
    return a+b; // this can be called a returning function cause it returns a+b init
}
int main()
{ 
  
int a =23;// may also use the value using scanf
int b=32;// may also use the value using scanf

    int s=sumofnumbers(a,b);// tha value of a+b is stored in a variable called s,so it can be used later on 
printf("the original value ",a);
printf("the changed  one:",x+1);// should directly add the value in its line rather than before 
printf("the sum of :",s);

    return 0;
}