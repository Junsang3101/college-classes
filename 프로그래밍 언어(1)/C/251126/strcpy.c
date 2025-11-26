#include <stdio.h>
#include <string.h>

int main() {
    char buf[] = "hello World!\n";
    char tmp[128];

    strcpy(tmp, buf);
    printf("%s", tmp);

    return 0;
}