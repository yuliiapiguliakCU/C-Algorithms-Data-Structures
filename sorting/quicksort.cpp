#include <stdio.h>

int swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return 0;
}

int partititon(int arr[], int start, int end, int* pi) { //recursive
    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i+1], &arr[end]);
    *pi = i + 1; //pointer where pivot index is stored
    return 0;
}

int quickSort(int arr[], int start, int end){
    if(start < end) {
        int pi;
        partititon(arr, start, end, &pi);

        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
    return 0;
}

int printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Given array:\n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}