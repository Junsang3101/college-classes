#include <stdio.h>

int main () {
    int value, total = 0;

    for (int i=0; i<5; i++) {
        printf("값을 입력하시오 : ");
        scanf("%d", &value);
        total += value;
    }
    printf("합계 : %d\n", total);

    return 0;
}
