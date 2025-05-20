#include <stdio.h>

int main () {

    int a = 32;
    // not 비트 논리 연산자로 음수 - 1 로 만든다.
    a = ~a;
    // 비트연산을 하기 위해서 0x를 사용해 16진수로 합한다.
    a = a + 0x01;
    // 결과적으로 부호만 바뀐다.
    printf("%d\n", a);
    return 0;
}
