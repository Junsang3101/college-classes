#include <stdio.h>

int main() {
    int total = 0;
    for (int i=1; i<=10; i++) {
        printf("배준상\n");
        total += i;
    }
    printf("%d\n", total);

    return 0;
}
