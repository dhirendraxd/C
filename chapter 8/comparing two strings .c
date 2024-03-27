#include<stdio.h>
#include <string.h>
int main()          //  comparing stings through : strcmp , strncmp
{ 
    char one[]="dhirendra";
    char two[]="singh ";
    int i,flag;
// without using strcmp
         for ( i = 0; one[i] != '\0' || s2[i]!= '\0' )
         {
            if (one[i] !=two[i])
            {
                flag =1;
                break;
            }
            
         }
         for (flag==1)
         {
            printf("not same ");
         }

// using strcmp 
    material = strcmp(one ,two );
       if (material==0)
       {
printf("not same");
       }
       else
       {
        printf("same same");
        printf("%d",material);
       }
       
       
    return 0;
}