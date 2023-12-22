// library functions in c
#include <stdio.h>
int main()
{
  double a = 848.44;
  int b = 8;
  char c = 'h';
  char C[] = "hey how you doin";
  int d = 47 + 74;
  //  \n is used to assign a new  the afterward text or any further result in a new line

  printf("the value of a is %f \n ", a);
  // the %f is used to print the point numbers   only for "float" and "double" ..

  printf("the value of b is %d \n", b);
  // the %d is used to print the value of intigers such as numbers without any decimal points

  printf("the value of c is %c \n", c);
  // the %c is used to print the value of characters only for a single word character..

  printf("the value of C is %s \n", C);
  //  to print the value of characters in a array we use  %s     ,,,,,

  printf("sum of a and b is %f", a + b);
  // we can add two  same kind of variables , we cna alos add the numbers inline and print it as of follow ..

  printf("sum of a and c is %d \n", d);
  // the above shows how we can print a value by adding  or subtracting it inside the variables ...
  printf("the value of d is %f",d);
  return 0;
}



