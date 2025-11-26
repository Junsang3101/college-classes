#include <stdio.h>
#include <stdlib.h>

int main() {
    char arr[] = {"hello World!\n"};

    for (char *ptr = arr; *ptr != '\0'; ptr++) {
        printf("%c", *ptr);
    }
    printf("\n");

    return EXIT_SUCCESS;
}