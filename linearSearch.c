//Write a 'C' program to perform linear search and apply it to the following set of
// integers to search for a number 28 :
// 9 15 22 5 4 25 28
// Calculate the number of comparison operations required
#include <stdio.h>

int linearSearch(int arr[], int size, int key, int* numComparisons) {
    for (int i = 0; i < size; i++) {
        (*numComparisons)++;
        if (arr[i] == key) {
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int arr[] = {9, 15, 22, 5, 4, 25, 28};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 28;
    int numComparisons = 0;

    int index = linearSearch(arr, size, key, &numComparisons);

    if (index != -1) {
        printf("Number 28 found at index %d.\n", index);
    } else {
        printf("Number 28 not found in the array.\n");
    }

    printf("Number of comparison operations required: %d\n", numComparisons);

    return 0;
}
