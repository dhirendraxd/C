#include<stdio.h>
#include <string.h>
int main()
{


// the below program takes two string values form user and now it compares both the strings with each other  

// the capital and small letter words also makes difference.....

int value,flag,i;
    char s1[30],s2[30];
    printf("enter string \n");
    fgets(s1);
    printf("enter secodn strings :\n");
    fgets(s2);

    // value=strcmp(s1,s2);
for ( i = 0; s1[i]!='\0' || s2[i]!='\0';,i++)
{
    if (s1[i]!=s2[i])
    {
flag=1;
break;
    }
    
}

    if (flag==0)
    {
        printf("same");
    }
    else{
        printf("not same ");
    }

    return 0;
}