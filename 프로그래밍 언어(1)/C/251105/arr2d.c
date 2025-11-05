#include <stdio.h>
#include <stdlib.h>
#include "D251105.h"

int main() {
    int arr[3][3];

    for (int i=0; i<3; i++) {
        randarr(arr[i], 3, 10);
        intarrprint(arr[i], 3);
    }

    return EXIT_SUCCESS;
}