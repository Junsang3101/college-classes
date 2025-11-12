#include <stdio.h>
#include <stdlib.h>

#define CARR_SIZE 4

int main () {
    char carr[CARR_SIZE] = {'a', 'b', 'c', '\n'};
    char *ptr = carr;
    
    for (int i=0; i<CARR_SIZE; i++) {
        printf("%c", *ptr);
    }
    printf("\n");
    return EXIT_SUCCESS;
}