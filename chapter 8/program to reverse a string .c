#include<stdio.h>
#include<string.h>
// function for  reversing string incase strrev does't works 
 
void reverseString(char* str) {
    int length = strlen(str);
    int i, j;
    char temp;
    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}



int main()
{ 
    char s1[20]="dhirendra ";
    reverseString(s1);
    strev(s1);

    puts(s1); 
     printf("%s",s1);
// the strev will reverse the letter ardnerihd 
    return 0;
}