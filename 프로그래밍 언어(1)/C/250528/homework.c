#include <stdio.h>

int main () {

    /*309page 7question*/
    for (int i=0; i<7; i++) {
        for (int j=7; j>i; j--) {
            printf(" ");
        }
        for (int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    /*309page 8question*/
    int n;
    printf("점수를 입력하시오: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
