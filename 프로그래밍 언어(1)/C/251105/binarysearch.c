#include <stdio.h>
#include <stdlib.h>
#include "D251105.h"

#define ARR_SIZE 1000
#define INPUT_SIZE 10

int main() {
    char input[INPUT_SIZE];
    int arr[ARR_SIZE];
    int target, result;

    randarr(arr, ARR_SIZE, 100);

    printf("target num : ");
    if (fgets(input, INPUT_SIZE, stdin) == NULL) {
        fprintf(stderr, "I/O error has occurited on fgets\n");
        return EXIT_FAILURE;
    }
    else {
        target = atoi(input);
    }
    
    result = binarysearch(arr, ARR_SIZE, target);
    if (result == -1) {
        printf("Does not exist\n");
    }
    else {
        printf("index : %d", result);
    }

    return EXIT_SUCCESS;
}