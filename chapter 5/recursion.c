#include<stdio.h>
// using recursion and loops or iteration is same but sometime loop can be longer and sometime recursion can be longer so using them according is a crucial part 

void helloprint( int count);

void helloprint(int count){
    if (count==0 || count==1)
    {
        return 1;
    }
    else
    {
        return count * factorial(x-1);
    }
    
    printf("helloworld");
    helloprint(count-1); // this is used when we want to decrease the value of a functions each times it is made  

}


int main(){ 


helloprint(63); // this is a recursive function
    return 0;
}