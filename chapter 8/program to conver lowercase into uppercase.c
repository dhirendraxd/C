
#include<stdio.h>
#include <string.h>
int main()
{ 
                 


                 // exam based question 



// using strlwr function 
    char s1[23];
    fgets(s1,sizeof(s1),stdin);
    
    strlwr(s1);
    printf("%s",s1);
    
// using ASCII 
for ( i = 0; s1[i] !='\0'; i++)
{
    if (s1[i]>='A' && s1[i]<='Z') // CAPITALIZED WORDS FOR UPPERCASE DECREASING 

    {
        // for lowercase
       // s1[i]=s1[i]+32;
        s1[i]+=32; // this is a shorthand property for lowercase

        
    }
    else if (s1[i] >= 'a' && s1[i] <= 'z') // lowercase words for lowercase words to uppercase 
    {
            s1[i] -= 32; // Convert lowercase to uppercase

            // for uppercase :
        //  s1[i]=s1[i]+32;
        // s1[i]-=32 // this is a shorthand property for uppercase


    else{

        printf(" your number was not all cap re-enter all cap \n");
        return 1;
    }
}
printf("converted strings:%s",s1)

    return 0;
}