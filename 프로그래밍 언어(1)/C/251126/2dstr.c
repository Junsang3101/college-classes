#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char list[5][10] = {
    "apple",
    "banana",
    "pineapple",
    "mango",
    "amond"
    };

    for (int i=0; i<5; i++) {
        printf("%s\n", list[i]);
    }
    
    return EXIT_SUCCESS;
}