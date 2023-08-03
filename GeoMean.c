// Write a program to calculate the mean value of a set of six integer numbers
// stored in an array and calculate how many times the loop and addition
// operations will execute.
// The mean of a set of integers is the sum of integers divided by the number of
// integers in the set
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int len = 6;
    int sum = 0;
    float mean;
    for(int i = 0; i < len; i++){
        sum += arr[i];
    }
    mean = (float)sum/len;
    printf("The mean of the numbers in the array is: %f",mean);
    return 0;
}