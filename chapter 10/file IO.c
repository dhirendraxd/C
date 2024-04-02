#include<stdio.h>
int main()
{ 
     
     //     FILE   in c programmign FILE is a data type defined in stdio.h  which represents a file stream and is used for performing input and output operations on files.

FILE *filehokya=NULL;  // this is an empty pointer later on we can asssign it any files and acess (read and write) those file thorugh its pointer name, we can also intialize the file NULL also .......
char str[30]="dhirendra singh dhami ";
char ch='a'; 

int a =10;
     filehokya=fopen("F:\\Koding\\C\\chapter 10\\readme.txt","w"); // in this code the pointer filehokya is storing  the file name chapter 10..
        fputc(ch,filehokya); // fputc works as concating the pointer file 
            // fuptc stores the data of "ch" in the file pointer "filehokya" , "a" will be written to the FILE through its pointer filehokya 

                fputs(str,filehokya);// while storing a data for strings or long long character  we have to store it through fputs and the string name , also 

                   fputs("dhirendra ",filehokya); // the string written shoudl be in double case .
                     // we can also write the while string here  and then store or write it to file pointer of the file 



// loop for storing the character in a variables 
 for (char  i = 0; i!=strlen(str); i++)
 {

         fputc(str[i],filehokya);   // fputc is used to store the value  returned by the loop in each iteration 

 }
             fprintf(filehokya,"%d %s",a,str); // formated printf
                 // in this filehokya is used to give idea about form where the data is reterived and where to store it 
                     
                     //In simpler terms, `filehokya` is a pointer that tells the functions (`fputc()`, `fprintf()`) where to write the data. When you open a file using `fopen()` and assign it to `filehokya`, it becomes associated with that file. So, when you use `fputc()` or `fprintf()` with `filehokya`, those functions know to write data to the file pointed to by `filehokya`. It's like telling someone the address of a house - once they know the address, they can go to that house to deliver or retrieve things. Similarly, `filehokya` tells the functions where to deliver the data you want to write.
                 
 


fclose(filehokya); //  after the use we shoudl always close the program 
    return 0;
}