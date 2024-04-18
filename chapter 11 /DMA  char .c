#include<stdio.h>

int main(){
    char *char_ptr;
    printf("Size of a char: %d bytes\n", sizeof(char));
    char_ptr = (char *)malloc(6 * sizeof(char));

    char_ptr[0] = 'H';
    char_ptr[1] = 'e';
    char_ptr[2] = 'l';
    char_ptr[3] = 'l';
    char_ptr[4] = 'o';
    char_ptr[5] = '\0'; // Null terminator for string

    printf("Characters stored in the char array: %s\n", char_ptr);

    free(char_ptr);
   
//    calloc

 char *char_ptr;
    char_ptr = (char *)calloc(6, sizeof(char));

    char_ptr[0] = 'H';
    char_ptr[1] = 'e';
    char_ptr[2] = 'l';
    char_ptr[3] = 'l';
    char_ptr[4] = 'o';
    char_ptr[5] = '\0'; // Null terminator for string

    printf("Characters stored in the char array: %s\n", char_ptr);

    free(char_ptr);
return 0;
}