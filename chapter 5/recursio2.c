#include <stdio.h>

void countdown(int n) {
    // Base case: if n reaches 0, stop recursion
    if (n == 0) {
    // when the recursion hit zero,it will hit 0 cause it is being rewind using -1 in it and will stop when hit 0 and print blast off
        printf("Blastoff!\n");
        return; // the return in not necessary but can be useful furtherly
        
    } else {
        // Print the current value of n
        printf("%d\n", n);
        // Call the function recursively with a decremented value of n
        countdown(n - 1);
    }
}

int main() {
    // Call the countdown function with an initial value
    countdown(5);
    return 0;
}
