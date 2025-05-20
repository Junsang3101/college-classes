#include <stdio.h>

int main() {

    int x, y;

    printf("x 와 y를 입력:");
    scanf("%d %d", &x, &y);

    (0 < x && 0 < y) ? printf("제1사분면\n") : printf("");
    (0 > x && 0 < y) ? printf("제2사분면\n") : printf("");
    (0 > x && 0 > y) ? printf("제3사분면\n") : printf("");
    (0 < x && 0 > y) ? printf("제4사분면\n") : printf("");

    return 0;
}
