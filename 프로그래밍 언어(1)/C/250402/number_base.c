#include <stdio.h>

int main()
{
    // C에서의 진수별 표기 방법
    int x= 10;      // 10진수는 따로 없음
    int y = 010;    // 8진수
    int z = 0x10;   // 16진수
    int b = 0b10;   // 2진수

    printf("x = %d", x);
    printf("y = %d", y);
    printf("z = %d", z);
    printf("b = %d", b);

    return 0;
}