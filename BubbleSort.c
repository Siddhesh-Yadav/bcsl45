// Write a program to sort the following list of numbers using Bubble Sort
// algorithm :
// 15 27 5 2 85 45 30
// Calculate
// (a) how many times the outer loop and inner loop will execute, and
// (b) how many exchange operations will execute
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size, int *outerLoopCount, int *innerLoopCount, int *exchangeCount) {
    for (int i = 0; i < size - 1; i++) {
        (*outerLoopCount)++;
        int swapped = 0;

        for (int j = 0; j < size - i - 1; j++) {
            (*innerLoopCount)++;
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
                (*exchangeCount)++;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {15, 27, 5, 2, 85, 45, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int outerLoopCount = 0;
    int innerLoopCount = 0;
    int exchangeCount = 0;

    printf("Original List: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, size, &outerLoopCount, &innerLoopCount, &exchangeCount);

    printf("Sorted List: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Number of outer loop executions: %d\n", outerLoopCount);
    printf("Number of inner loop executions: %d\n", innerLoopCount);
    printf("Number of exchange operations: %d\n", exchangeCount);

    return 0;
}
  