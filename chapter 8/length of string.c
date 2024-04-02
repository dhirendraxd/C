#include <stdio.h>
#include <string.h> // we use  string.h to use the strlin function for strings must use for strings
int main()
{
    int count = 0, i = 0;
    char name[43];
    printf("enter name:\n");
    fgets(name, sizeof(name));
    // count = strlen(name);

    while (name[i] != '\0')
    {
        count++;
        i++;
        // both the value of count and i will be increased  by each iteration of loop
    }

    puts(name); // puts is mainly used for strings
    printf("name entered =%s", name);

    printf("the length of the string =%d", count); // %d cause the length is a int value so we use %d rather then in strings we generallly use %s.

    return 0;
}
