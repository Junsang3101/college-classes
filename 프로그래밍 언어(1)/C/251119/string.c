#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[8] = "hellow";
    char b[6] = {'w', 'o', 'r', 'l', 'd'};
    char c[] = "!!\n";

    printf("%s %s %s", a, b, c);

    return EXIT_SUCCESS;
}