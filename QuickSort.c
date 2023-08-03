#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j <= high; j++) { // Corrected loop condition
        if (arr[j] < pivot) {
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    
    int temp = arr[i + 1]; // Placing pivot in its correct position
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1; // Return the pivot index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pidx = partition(arr, low, high); // Corrected parameter passing
        quickSort(arr, low, pidx - 1); // Corrected pivot variable
        quickSort(arr, pidx + 1, high); // Corrected pivot variable
    }
}

int main() {
    int arr[] = {24, 42, 10, 22, 66, 9};
    int size = sizeof(arr) / sizeof(int);
    quickSort(arr, 0, size - 1);
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
