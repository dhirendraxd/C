#include<stdio.h>

int main(){
    

 
    FILE *fptr;
       char ch;
    *fptr=fopen("dhiren.py","r");

// reading the words inside dhiren.py

// easier form to read data inside of a file 
fgetc(fptr);


    fscanf(fptr,"%c",&ch);
    printf("character= %s \n",ch);

   fscanf(fptr,"%c",&ch);
    printf("character= %s \n",ch);

   fscanf(fptr,"%c",&ch);
    printf("character= %s \n",ch);

   fscanf(fptr,"%c",&ch);
    printf("character= %s \n",ch);

   fscanf(fptr,"%c",&ch);
    printf("character= %s \n",ch);
// the above program will read each words from the  file called dhiren.py one by one  and will stop when no any words left 


// writing inside the file 

//  the  ptr=fopen("dhiren.py","w"); // "w" is used when we want to write inside a program 

fprintf(fptr,"%c",'m');
fprintf(fptr,"%c",'a');
fprintf(fptr,"%c",'n');
fprintf(fptr,"%c",'g');
fprintf(fptr,"%c",'o');
fprintf(fptr,"%c",'u');

// easier form for writing data inside :
fputc('hi',fptr);

    fclose(fptr);
return 0;
}