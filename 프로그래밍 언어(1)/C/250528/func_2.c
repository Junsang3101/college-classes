#include <stdio.h>

int max(int x, int y) {
    return (x > y)? x : y;
}

int main() {
    int x=10, y=10;
    printf("%d\n", max(x, y));


    return 0;
}
