#include <stdio.h>
#include <stdlib.h>

#define MAX_BUF_SIZE 128

int main() {
    char buf[MAX_BUF_SIZE];
    char name[MAX_BUF_SIZE];
    int age;

    if (fgets(buf, MAX_BUF_SIZE, stdin) == NULL) {
        return EXIT_FAILURE;
    } else {
        sscanf(buf, "%s %n", name, &age);
    }

    printf("name : %s\nage : %n", name, age);

    return EXIT_SUCCESS;
}