#include <stdio.h>

void minmaxarr(int **min, int **max, int *arr) {
    *min = arr;
    *max = arr;
    for (int i = 0; i < 10; i++) {
        if (**min > arr[i]) {
            *min = &arr[i];
        }
        else if (**max < arr[i]) {
            *max = &arr[i];
        }
    }
}

void intarrprint(int *arr, int size) {
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void initarr(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        arr[i] = value;
    }
}

void intswap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int *arr, int size) {
    if (size < 2) {
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                intswap(&arr[i], &arr[j]);                
            }
        }
    }
}
