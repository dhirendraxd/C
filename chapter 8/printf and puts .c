#include <stdio.h>
int main()
{
    char hey[23];

    printf("enter any words :\n");

    fgets("%21s", hey);
    // %21s to store or allocate the memeory for 21 words and one for null value and one will have a garbage value automatically   and   we dont use '&' in strings.

    printf("%.20s", hey);
    // %.20s for printing values till 20th position  of that strings .

    printf("%10.5s", hey);
    //  it ensures that if the string is shorter than 10 characters, it will be padded with spaces to the left within a field of at least 10 characters wide. Additionally, it limits the output to at most 5 characters of the string.
    // if the string is shorter than 5 characters, it will be printed entirely within the 10-character field, with the remaining characters filled with spaces. If the string is longer than 5 characters, it will be truncated to 5 characters, and the first 5 characters will be printed within the 10-character field.

    puts(hey); // we dont have to use \n like others

    // puts is mainly for strings  and meanwhile printf is widely used and also very flexibility

    puts(hey);
    // using puts provide a new line by itself means it will not print the next puts in the same as printf does .. both have its plus and minus side

    printf("%s", &name[4]);
    // ok now on the above &name[4]  the data will be printed from the 4th afterwards value  till it gets a null value

    return 0;
}