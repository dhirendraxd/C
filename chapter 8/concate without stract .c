#include <stdio.h>
int main()
{
    char one, two;
    int i, l1, l2;
    char s1[30] = "dhirendra singh ";
    char s2[30] = "dhami";
    strcat(s1, s2);
    // this is for caoncatinate in a single form of s1 :
    printf(" after concat %s", s1);

    //  it will print dhirendra singh dhami in a single form
    puts(s2);

    // this is without using stracat
    l1 = strlen(s1);
    l2 = strlen(s2);
    for (i = 0; i < l2; i++)
    {
        s1[l1 + 1] = s2[i];
    }
    printf("%s", s1);

    // if we want to only add two letter form the next string here how it is done
    strncat(s1, s2, 4);
    puts(s1);
    // now this will add only 4 letters and print it concatinated

    one = strlen(s1);
    two = strlen(s2);

    for (char i = 0; i <= two; i++)
    {
        s1[one + i] = s2[i];
    }
    printf(" the sorted form=%s", s1);

    // if we want to only concatinate only the first letter of a sting it is done by :

    strncat(s1, s2, 4)
        first is destination string(s1)
            second is source string(s2)
                third is how many character we want to concatinate(4)

                    return 0;
}