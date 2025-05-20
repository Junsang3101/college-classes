#include <stdio.h>

int main() {

    char c;

    printf("문자를 입력:");
    c = getchar();

    if ('A' <= c && c <= 'Z') {
        printf("대문자 입니다.\n");
    }
    else if ('a' <= c && c <= 'z') {
        printf("소문자 입니다.\n");
    }
    else if ('0' <= c && c <= '9') {
        printf("숫자 입니다.\n");
    }
    else if (33 <= c && c <= 126) {
        printf("특수 문자 입니다.\n");
    }
    else if (c == ' ') {
        printf("공백 문자(space)입니다.\n");
    }
    else {
        printf("출력 가능 문자가 아닙니다.\n");
    }

    return 0;
}
