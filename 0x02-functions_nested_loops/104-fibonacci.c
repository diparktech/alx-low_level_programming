#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purple
 * return -0 success
 */
#include <stdio.h>

int main() {
    int fib1 = 1;  // First Fibonacci number
    int fib2 = 2;  // Second Fibonacci number
    int count = 2; // Counter for the number of Fibonacci numbers found

    printf("%d, %d, ", fib1, fib2); // Print the first two Fibonacci numbers

    while (count < 98) {
        int nextFib = fib1 + fib2;  // Calculate the next Fibonacci number

        printf("%d, ", nextFib); // Print the next Fibonacci number

        fib1 = fib2; // Update the values for the next iteration
        fib2 = nextFib;

        count++; // Increment the counter
    }

    printf("\n"); // Print a new line

    return 0;
}
