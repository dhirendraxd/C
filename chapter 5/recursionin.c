
#include<stdio.h>


// function  for factorial call recursion
int factorial(int x);

int factorial(int x) {
    if (x <= 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1
    } else {
        return x * factorial(x - 1);  // Recursive call for factorial
    }
}




int main() { 
    int n = 0;
    int fact = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    fact = factorial(n); // Call factorial function with input n

    printf("Factorial is: %d\n", fact);

    return 0;
}
// sum of natural numbers
#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0; // Base case: sum of 0 natural numbers is 0
    else
        return n + sum(n - 1); // Recursive call to sum of n-1 natural numbers
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is %d\n", n, sum(n));
    return 0;
}

//fibonacci series
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n; // Base case: Fibonacci of 0 is 0, Fibonacci of 1 is 1
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call to Fibonacci of n-1 and n-2
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
    return 0;
}
