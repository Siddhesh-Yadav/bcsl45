// Write a program to calculate the length of a string. Calculate the number of
// times the loop will execute and the number of comparison operations required in
// this program.
#include <stdio.h>

int stringLength(const char *str, int *numLoopExecutions, int *numComparisons) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
        (*numLoopExecutions)++;
        (*numComparisons)++;
    }
    return length;
}

int main() {
    const char *str = "Hello, world!";
    int numLoopExecutions = 0;
    int numComparisons = 0;

    int length = stringLength(str, &numLoopExecutions, &numComparisons);

    printf("String: %s\n", str);
    printf("Length of the string: %d\n", length);
    printf("Number of loop executions: %d\n", numLoopExecutions);
    printf("Number of comparison operations: %d\n", numComparisons);

    return 0;
}
