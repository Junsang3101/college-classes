#include <stdio.h>
#include <stdlib.h>

int main() {

    int num = 5;

    if (num > 0) {
        printf("num 은 양수 입니다.\n");
    } else if ( num < 0) {
        printf("num 은 음수 입니다.\n");
    }

    // absolute value 절대값
    if (abs(num)     % 2 == 0) {
        printf("num 은 짝수 입니다.\n");
    } else if (num % 2 != 0) {
        printf("num 은 홀수 입니다.\n");
    }

    printf("num 은 %d 입니다.\n", num);

    return 0;
}
