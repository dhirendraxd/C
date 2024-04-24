#include<stdio.h>
#include<string.h>
int main(){
// string functions

    char string1[]="hey how you doin";
    char string2[]="I AM GOOD HOW YOU DOIN "
    strlwr(string2);// lowercase the capital words in it 
    strupr(string1);// CAPITALIZE THE LOWERCASE WORDS 
     strcat(string1,string2);// combines both the words together 
     strncat(string1,string2,1);//  addsup the  letter of the 2nd values passed : output how how you doinI
     strcpy(string1,string2);//replace  the whole words of the  string1 to string2
     strncpy(string1,string2,4); // replace the 4 of the words of the string2  to string1 
     strset(string1,'h');// all the words inside the string1 will be replaced with  h in our case we will get  12 h 
     strnset(string1,'x',1);//  now the (1) first letter of the  string1 will be set to 'x'
     strrev(string1);// the words will be reversed 
     
int result=strlen(string1); // give the string length as int  the words it have in it spaces count while counting ;
int result=strcmp(string1,string2);//compare all character case also  and if same it returns 0 and if not then any other numbers 
int result=strncmp(string1,string2,1);// it compares the given n (position)of characters case also 

        // these two are the advaned or other form of the comparing 
           int result=strcmpi(string1,string1);//string compare all  words capital or smaller  case alos works 
           int result=strnicmp(string1,string1,1);// string compare n character of the values passed and case sensative isn't a  problem here 
return 0;
}


// loops 
#include<stdio.h>

int main(){
    name[25];
    for (int i = 0; i >= 10; i++)
    {
        printf("hey this code will print 1otimes ")
    }
    while (strlen(name)==0)
    {
        printf("you dick enter a name  ");
    }
    


return 0;
}