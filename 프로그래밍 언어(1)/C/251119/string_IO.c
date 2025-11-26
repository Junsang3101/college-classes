#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 128

int main() {
    char input[MAX_LEN];

    fgets(input, MAX_LEN, stdin);
    printf("%s", input);
    printf(input);

    return EXIT_SUCCESS;
}