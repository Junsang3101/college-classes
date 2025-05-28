#include <stdio.h>

void get(int* a) {
    printf("정수를 입력 : ");
    scanf("%d", a);
}

int add(int a, int b) {
    return a+b;
}

int main () {
    int x, y;
    get(&x);
    get(&y);
    printf("두 정수의 합 : %d\n", add(x, y));

    return 0;
}
