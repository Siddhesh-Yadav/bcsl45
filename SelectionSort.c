// Implement the selection sort algorithm to sort an array of 10 integer
// numbers showing all the intermediate steps :
// 35, 25, 15, 5, 14, 18, 16, 13, 17, 19
// How many times will the inner loop execute and number of key
// comparisons required
#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size, int* numLoopExecutions, int* numComparisons) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            (*numLoopExecutions)++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            (*numComparisons)++;
        }

        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

int main() {
    int arr[] = {35, 25, 15, 5, 14, 18, 16, 13, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int numLoopExecutions = 0;
    int numComparisons = 0;

    selectionSort(arr, size, &numLoopExecutions, &numComparisons);

    printf("Sorted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Number of loop executions: %d\n", numLoopExecutions);
    printf("Number of key comparisons: %d\n", numComparisons);

    return 0;
}
