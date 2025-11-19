#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int is_seeded = 0;

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

void randarr(int *arr, int size, int mod) {
    ++mod;
    if (is_seeded == 0) {
        srand(time(NULL));
        is_seeded = 1;
    }
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % mod;
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

int binarysearch(int *arr, int size, int target) {
    int cursor = size/2;

    while (1) {
        if (arr[cursor] == target) {
            return cursor;
        }
        else if (arr[cursor] > target && cursor >= 0) {
            cursor /= 2;
        }
        else if (arr[cursor] < target && cursor < size) {
            cursor += cursor/2;
        }
    }

    return -1;
}

void hanoi(int hight, char f, char a, char t) {
    if (hight==1) {
        printf("%d %c -> %c\n",hight, f, t);
    }
    else {
        hanoi(hight-1, f, t, a);
        printf("%d %c -> %c\n", hight, f, t);
        hanoi(hight-1, a, f, t);
    }
}
