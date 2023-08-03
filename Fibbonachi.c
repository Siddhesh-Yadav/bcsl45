// Write a program to generate 10 numbers in Fibonacci series and calculate how
// many times the loop, addition and assignment operations will execute.
#include <stdio.h>

int main() {
    int n = 10; // Number of Fibonacci numbers to generate
    int fib[n];

    fib[0] = 0;
    fib[1] = 1;

    int loop_executions = 2; // Counting the initial two assignments above
    int addition_operations = 1; // Counting the addition operation for the second Fibonacci number (fib[1] = 1)
    int assignment_operations = 2; // Counting the initial two assignments above

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];

        loop_executions++;
        addition_operations++;
        assignment_operations++;
    }

    printf("The first %d numbers in the Fibonacci series are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    printf("Number of loop executions: %d\n", loop_executions);
    printf("Number of addition operations: %d\n", addition_operations);
    printf("Number of assignment operations: %d\n", assignment_operations);

    return 0;
}
