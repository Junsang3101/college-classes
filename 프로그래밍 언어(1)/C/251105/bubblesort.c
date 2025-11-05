#include <stdio.h>
#include <stdlib.h>
#include "D251105.h"

int main() {
    int arr[10] = {10, 4, 67, 3, 5, 2, 2, 1, 5, 7};

    bubblesort(arr, 10);
    intarrprint(arr, 10);

    return EXIT_SUCCESS;
}