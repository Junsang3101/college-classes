#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[] = "Man is immortal, because he has a soul";
    char seps[] = " ,\t\n";
    char *token;

    token = strtok(s, seps);
    while (1) {
        printf("토큰 : %s\n");
        token = strtok(NULL, seps);
    }

    return EXIT_SUCCESS;
}