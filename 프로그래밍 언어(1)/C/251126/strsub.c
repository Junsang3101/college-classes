#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "A bird in hand is worth two in the bush.";
    char sub[] = "bird";
    char *p;
    int loe;

    p = strstr(s, sub);
    if (p == NULL) {
        printf("%s가 발견되지 않았음\n", sub);
    } else {
        /* pointer arithmetic, 같은 자료형의 포인터끼리의 연산은 두 요소의 거리를 반환한다. */
        loe = (int)(p - s);
        printf("%s가 에서 첫 번째 %s가 %d에서 발견되었음\n", s, sub, loe);
    }

    return 0;
}