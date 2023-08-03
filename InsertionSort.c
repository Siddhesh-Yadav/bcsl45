// Use the insertion sort to sort the following list showing the lists obtained at each
// step :
// 15 10 2 4 7 8
// How many comparisons does the insertion sort use in the above list 
#include <stdio.h>

void insertionSort(int arr[], int size, int *numComparisons) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            (*numComparisons)++;
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {15, 10, 2, 4, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int numComparisons = 0;

    printf("Original List: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, size, &numComparisons);

    printf("Sorted List: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Number of Comparisons: %d\n", numComparisons);

    return 0;
}
