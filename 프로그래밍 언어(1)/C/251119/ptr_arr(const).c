#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr = "hellow?\n";

    printf(ptr);
    *ptr = "yes?\n";
    printf(ptr);

    return EXIT_SUCCESS;
}