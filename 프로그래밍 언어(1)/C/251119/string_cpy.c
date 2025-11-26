#include <stdio.h>
#include <stdlib.h>

int main() { 
    char src[] = "hello world!\n";
    char dst[100];

    for (int i = 0; src[i]; i++) {
        dst[i] = src[i];
    }
    printf(dst);

    return EXIT_SUCCESS;
}