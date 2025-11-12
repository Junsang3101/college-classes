#include <stdlib.h>
#include <stdlib.h>
#include "D251112.h"

int main() {
    int a = 1;
    int b = 2;

    printf("a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("a=%d b=%d\n", a, b);

    return EXIT_SUCCESS;
}