#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUF_SIZE 128
#define MAX_WORD_SIZE 32

int main() {
    char buffer[MAX_BUF_SIZE];
    char word[2][MAX_WORD_SIZE];
    char *nextline_ptr;
    int result = 0;

    printf("첫 번째 단어를 입력 해 주세요 : ");
    if (fgets(buffer, MAX_BUF_SIZE, stdin) == NULL) {
        return EXIT_FAILURE;
    } else {
        nextline_ptr = strchr(buffer, '\n');
        if (nextline_ptr != NULL) {
            *nextline_ptr = '\0';
        }
        strncpy(word[0], buffer, MAX_WORD_SIZE);
    }

    printf("두 번째 단어를 입력 해 주세요 : ");
    if (fgets(buffer, MAX_BUF_SIZE, stdin) == NULL) {
        return EXIT_FAILURE;
    } else {
        strncpy(word[1], buffer, MAX_WORD_SIZE);
        nextline_ptr = strchr(buffer, '\n');
        if (nextline_ptr != NULL) {
            *nextline_ptr = '\0';
        }
    }

    int wordlen[2];
    for (int i=0; word[0][i] != '\0' && word[1][i] != '\0'; i++) {
        wordlen[0] = strlen(word[0]);
        wordlen[1] = strlen(word[1]);
        result = wordlen[0] - wordlen[1];
        
        if (result < 0) {
            printf("첫 번째 단어가 먼저입니다.\n");
            break;
        } else if (result > 0) {
            printf("두 번째 단어가 먼저입니다.\n");
            break;
        }
    }
    
    if (result == 0) {
        if (wordlen[0] > wordlen[1]) {
            printf("두 번째가 먼저입니다.\n");
        } else if (wordlen[0] < wordlen[1]) {
            printf("첫 번째가 먼저입니다.\n");
        }
    }
    
    return EXIT_SUCCESS;
}