#include <stdio.h>
int main()
{
    char dhiren[23];
    printf("enter  words");
    scanf("%s", dhiren);

    //                       the format specifier for string is %s and we dont allocate the address of string we just write its name for the variable
    printf("%s", dhiren);

    //                   ok so if we  enter words like dhirend dra  and print it then only dhirend will print cause it will stop to store data  after  it encounter  whitespace (space, tab, newline, etc.)   so using scanf is risky so we also use fgets() in strings..

    fgets(dhiren, sizeof(dhiren), stdin); // sample code for fgets

    return 0;
}