/* BEST WAY:
void reverse_array(int arr[], int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        swap(&arr[i], &arr[j]);
    }
}*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array(int arr[], int n) {
    int k = n - 1;

    for (int i = 0; i < k; i++, k--) {
        swap(&arr[i], &arr[k]);
    }
}