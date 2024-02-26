// jenny mam
#include<stdio.h>
int main()
{ 
    int a =10;
    int *p;
    p=&a;
// now the adress of a is stored in p 
 
    printf("the value of p is %d\n",*p);
// this prints the value of  p which will be 10 cause of the p=&a;
    printf("the adress of p is %p \n",p);
// this will print the adress of the variable of a ,an empty variables should be made  be made before so it can work effectiverly  later on 





    return 0;
}