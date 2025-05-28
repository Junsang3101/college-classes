#include <stdio.h>

void alpha_print(char* arr, int size) {
    for (int i=0; i<size; i++) {
        if (arr[i] == '\0') {
            break;
        }
        printf("%c", arr[i]);
    }
    printf("\n");
}

void alpha_swap(char* arr, int size) {
    for (int i=0; i<size; i++) {
        if (65 <= arr[i] && arr[i] <= 90) {
            arr[i] += 32;
        }
        else if (97 <= arr[i] && arr[i] <= 122) {
            arr[i] -= 32;
        }
    }
}

int main () {
    char arr[256];
    printf("알파벳 문자열을 입력시오 : ");
    fgets(arr, sizeof(arr)-1, stdin);
    alpha_swap(arr, sizeof(arr));
    printf("대문자를 소문자로, 소문자를 대문자로 변환 ->\n");
    alpha_print(arr, sizeof(arr));

    return 0;
}
