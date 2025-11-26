#include <stdio.h>
#include <stdlib.h>

int main() {
    char instr[] = "file 12";
    char name[10];
    int num;

    sscanf(instr, "%s %d", name, &num);
    printf("name : %s\nage : %d\n", name, num);

    return EXIT_SUCCESS;
}