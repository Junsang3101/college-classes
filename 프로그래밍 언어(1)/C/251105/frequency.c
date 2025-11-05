#include <stdio.h>
#include <stdlib.h>
#include "D251105.h"

#define ARR_SIZE 6

int main() {
    int frequency[ARR_SIZE];
    initarr(frequency, ARR_SIZE, 0);

    for (int i = 0; i < 10000; i++) {
        ++frequency[rand() % ARR_SIZE];
    }

    int *min = frequency;
    int *max = frequency;
    minmaxarr(&min, &max, frequency);
    printf("min : %d\n max : %d\n", *min, *max); 

    return EXIT_SUCCESS;
}