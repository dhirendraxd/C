#include<stdio.h>
int main()
{ 
    int a=13;
    int *ptr=NULL;
    // so it is same as declaring a variable and assigning it a value of 0 
    
    return 0;
}
#include<stdio.h>
int main()
{ 

    
//
    return 0;
}

////////////////////////////////////////////////////////////////
#include <stdio.h>

int main() {
    int *ptr = NULL; // Initialize pointer to NULL

    // Attempting to dereference a null pointer will lead to undefined behavior
    // We're using a conditional statement to check if the pointer is null before dereferencing it
    if (ptr != NULL) {
        printf("Value at the address pointed by ptr: %d\n", *ptr);
    } else {
        printf("Pointer ptr is NULL, it doesn't point to any valid memory location.\n");
    }
    /*

 //           In this program:

 .We declare a pointer variable ptr and initialize it to NULL.

 .We attempt to dereference the pointer ptr to access the value it p oints to.

 .Before dereferencing ptr, we check if it's NULL using an if statement.

 .If ptr is NULL, we print a message indicating that it doesn't point to any valid memory location.
 
 .If ptr is not NULL, we print the value it points to (which would lead to undefined behavior in this case since ptr is null).

 .This code illustrates the use of null pointers and demonstrates how to check for null pointers before dereferencing them to avoid undefined behavior. */

    return 0;
}
