#include<stdio.h>
int main()
{ 
               // the '+' and '-' will simply add and reduce the digits in adress of  any pointer 

    int a =45;
    int *ptr=&a;
    
    printf("%d",ptr);
    printf("%d",ptr  + 1 );
    // now this above program will add one single digit to the adress of the pointer 
    ptr++;// this will increase the point values of  an adress value or may be a simple value .
    printf("%d",ptr  + 2 );
    // in this it will add two digits  while printing the adress 

    printf("%d",ptr  - 2 );
    // it will reduce the points by 2 when printing the  address 
    return 0;
}
// array
#include<stdio.h>
int main()
{ 
  int arr[]={1,2,3,4,5,6,6,5};
  printf("%d\n",arr[3]);
  printf("%d\n",arr[5]);
  printf("adress of first element :%d\n",&arr[1]); // this will print the adress of the first  element......
  printf("adress of first element :%d\n", arr + 1 );// this will also print the value  of second cause of the +1 in it.....

printf("adress of first element :%d\n",arr); // this also prints the value of [0]
printf("adress of first element :%d\n",arr[0]);// this will also print the value of [0]...


printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", arr[0]);
    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", arr[1]);
    printf("The value at address of second element of the array is %d \n", *(arr + 1));
    
    // the above will print the value of  the element at that particular position......
    return 0;
}