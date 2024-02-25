#include<stdio.h>
int main()
{

    int i =82;
// i stores the value 82 and suppose the adress of i is 980 ..

    int *j=&i;
// now j store the value and adress of the i 

    int _age=*j;
// in this we can now see what is the value of i   and it store its values through j adn allocating it to a new variable named _age .......

printf("%d\n",i);
// now the value stored in _age will be 82 cause it was passed through different pointer variables....

printf("%p\n",&_age);
// this is  how we print the memory address of a variable .....
// %p is used 

printf("%u \n",&_age);
// this is how we convert the  above hexadecimal or can  generated  a decimal value  and can make it a  unsigned int....

printf("%d\n",*j);
printf("%d\n",*(_age));

    return 0;
}

// explanation 

// #include<stdio.h>
// int main()
// {
//     // int age=2;
//     // int *ptr =&age;
//     // int _age=*ptr;

//     // printf("%d",_age);


// // so one of the use of pointer is to assign the value and adress of another variable to any of the variables along with its  memory adress 


//     return 0;
// }