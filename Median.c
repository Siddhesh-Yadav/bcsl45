// Write a program that produces the median of a set of five integers (unsorted).
// [The median of a set of integers is the middle element in the list when these
// integers are listed in the order of increasing numbers]. How much time will the
// program take to execute 
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

double findMedian(int arr[], int size) {
    bubbleSort(arr, size);
    if (size % 2 == 0) {
        return (arr[size / 2] + arr[size / 2 - 1]) / 2.0;
    } else {
        return arr[size / 2];
    }
}

int main() {
    int arr[5];
    printf("Enter five integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    double median = findMedian(arr, 5);
    printf("The median is: %.2lf\n", median);

    return 0;
}
