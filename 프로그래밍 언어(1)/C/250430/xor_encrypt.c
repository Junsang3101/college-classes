#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 256



int main() {

    char *plain_text = (char*)malloc(sizeof(char) * MAX_LENGTH);
    if (plain_text == NULL) {
        perror("malloc error\n");
        return 1;
    }
    printf("평문 : ");
    fgets(plain_text, sizeof(plain_text), stdin);
    plain_text[strcspn(plain_text, "\n")] = '\0';
    char* cypher_text = (char*)malloc(sizeof(char) * MAX_LENGTH);
    if (plain_text == NULL) {
        perror("malloc error\n");
        return 1;
    }
    char *key = (char*)malloc(sizeof(char) * MAX_LENGTH);
    if (key == NULL) {
        perror("malloc error\n");
        return 1;
    }
    printf("KEY : ");
    fgets(key, sizeof(key), stdin);
    plain_text[strcspn(plain_text, "\n")] = '\0';
    int key_index=0;

    printf("평문 : %s\n", plain_text);

    for (int i=0, j=0; plain_text[i] != '\0'; i++, j++) {
        if (key[j] == '\0') {
            j = 0;
        }
        cypher_text[i] = plain_text[i] ^ key[j];
    }
    printf("!! 암호화 시 특수 문자도 있기 때문에 이상하게 보임 !!\n");
    printf("암호문 : %s\n", cypher_text);
    for (int i=0, j=0; plain_text[i] != '\0'; i++, j++) {
        if (key[j] == '\0') {
            j = 0;
        }
        cypher_text[i] = plain_text[i] ^ key[j];
    }
    printf("재해독 : %s\n", plain_text);

    return 0;
}
