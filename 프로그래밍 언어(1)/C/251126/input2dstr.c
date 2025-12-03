#include <stdio.h>
#include <stdlib.h>

int main() {
    char word[3][20];

    for (int i=0; i<3; i++) {
        if (fgets(word, 20, stdin) == NULL) {
            return EXIT_FAILURE;
        } else {
            char *nextline_ptr;
            nextline_ptr = strchr('\n');
            if (nextline_ptr != NULL) {
                *nextline_ptr = '\0';
            }
        }
    }

    for (int i=0; i<3; i++) {
        printf("%s\n", word[i]);
    }

    return EXIT_SUCCESS;
}