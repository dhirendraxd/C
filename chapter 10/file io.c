#include<stdio.h>

int main(){
    
    FILE *fptr;
    fptr=fopen("dhiren.py","r"); // opened file and transfer its value ot fptr 

    // dhiren.py is the file that will open by while runnign this program,
    // mode is the things that will happen after we execute the file 



       if (fptr==NULL)
       {
        printf("file doesnt exist");
       }
else{
    fclose(fptr);
    // we should close the files we can leave it as itwas but closing it is consider a good practise 
}
return 0;
}