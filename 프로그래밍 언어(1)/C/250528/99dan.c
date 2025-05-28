#include <stdio.h>

int main () {

    for (int i=2; i<=9; i++) {
        for (int j=2; j<=9; j++) {
            printf("%2d*%2d=%2d ", j, i, i*j);
        }
        printf("\n");
    }

    return 0;
}
