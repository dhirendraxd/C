#include<stdio.h>
// using recursion and loops or iteration is same but sometime loop can be longer and sometime recursion can be longer so using them according is a crucial part 

void helloprint( int count);

void helloprint(int count){
    if (count==0)
    {
        return;
    }
    printf("helloworld");
    helloprint(count-1);
}


int main(){ 

helloprint(63);
    return 0;
}