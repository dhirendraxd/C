#include <stdio.h>
#include <string.h>

int main()

{
  // '\0' = this is a Null terminator
  char s1[12] = "dhiren";
  char s2[23] = "dra singh";
  concatted[40]; // defining a variable to store the values of both
                 // the  length  have to be specific cause it will help in  storing data

  **concatted = strcat(s1, s2); // this wont work cause stract dont pass value to other variables

  //            instead
  strcat(s1, s2)                          // attached or s1 stored the value of s2 init
      printf("concates strings :%s", s1); // output :  dhiren dra singh

  // to prints string its ("%s")

note:
  when we use strcat(v1, v2)
  the value of v2 will be automitically stored in the v1 made or along with it, and also the string capacity shoudl be more to combine both of the variables along with the null terminator

                                                                                    strcpy(concatted, s1); // Copy s1 into concatted
                                                                                                           // in this we have copied the value of s1 using strcpy  function

  strcat(concatted, s2); // Append s2 onto concatted
                         // we have then attached or stored the s2 value after we copied s1s values

  //         as in the above both the s1 and s2 are being joined together using strcat and strcpy both works the same but  both have their own pros and cons  ,both of theirs data is stored in a variables which is concatted along with the storing capacity of [40]......

  the output form the above will print : dhirendra singh and wont give any spaces along the sentences........

                                         return 0;
}