// Write a program to combine any two given strings. Calculate the number
// of times the loop will execute and the number of comparison operations
// required in this program.
#include <stdio.h>
#include <string.h>

void combineStrings(char result[], const char str1[], const char str2[], int* numLoopExecutions, int* numComparisons) {
    int i = 0;
    
    // Copy characters from str1 to the result string
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
        (*numLoopExecutions)++; // Count loop iterations
        (*numComparisons)++; // Count character comparisons
    }
    
    // Copy characters from str2 to the result string
    int j = 0;
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
        (*numLoopExecutions)++; // Count loop iterations
        (*numComparisons)++; // Count character comparisons
    }
    
    // Terminate the result string
    result[i] = '\0';
    (*numLoopExecutions)++; // Count loop iteration for null termination
}

int main() {
    const char str1[] = "Hello, ";
    const char str2[] = "world!";
    char result[100]; // Assuming the combined string won't exceed 100 characters
    int numLoopExecutions = 0;
    int numComparisons = 0;

    combineStrings(result, str1, str2, &numLoopExecutions, &numComparisons);

    printf("Combined String: %s\n", result);
    printf("Number of loop executions: %d\n", numLoopExecutions);
    printf("Number of comparison operations: %d\n", numComparisons);

    return 0;
}
