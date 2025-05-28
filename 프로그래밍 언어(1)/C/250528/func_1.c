#include <stdio.h>

void print_stars(int number) {
    for (int i=0; i<number; i++) {
        printf("*");
    }
}

int main () {
    print_stars(5);

    return 0;
}
