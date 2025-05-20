#include <stdio.h>

int main() {
    int num, total = 0;
    scanf("%d", &num);

    for (int i=0; i<num; i++) {
        total += i;
    }
    printf("1 ~ %d 까지의 총 합 : %d\n", num, total);
    total = 0;

    for (int i=0; i<num; i++) {
        if (i % 2 == 0) {
            total += i;
        }
    }
    printf("1 ~ %d 까지 짝수의 총 합 : %d\n", num, total);
    total = 0;

    return 0;
}
