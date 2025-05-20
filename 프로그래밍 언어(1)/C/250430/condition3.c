#include <stdio.h>

int main() {

    int x, y;

    printf("두 정수 입력:");
    scanf("%d %d", &x, &y);

    printf("큰 수: %d\n", (x > y) ? x : y);
    printf("작은 수: %d\n", (x < y) ? x : y);

    return 0;
}
