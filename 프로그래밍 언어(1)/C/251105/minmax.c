#include <stdio.h>
#include <stdlib.h>
#include "D251105.h"

#define ARR_SIZE 10

int main() {
    int arr[ARR_SIZE] = {5, 1, 3, 2, 7, 9, 5, 3, 2, 10};

    int *min = NULL, *max = NULL;
    minmaxarr(&min, &max, arr);
    printf("min : %d\n max : %d\n", *min, *max); 

    return EXIT_SUCCESS;
}