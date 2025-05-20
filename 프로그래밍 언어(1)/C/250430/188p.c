#include <stdio.h>

int main() {

    int year;
    printf("연도를 입력:");
    scanf("%d", &year);
    printf("%d\n", year%2 == 0);

    return 0;
}
