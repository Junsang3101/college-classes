#include <stdio.h>
#include <stdlib.h>

int main() {
    char s_1[] = "100";
    char s_2[] = "12.34";
    int n_1;
    float n_2;

    n_1 = atoi(s_1);
    n_2 = atof(s_2);

    printf("연산 결과는 %.2f", (float)n_1 - n_2);

    return EXIT_SUCCESS;
}