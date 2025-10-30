// 숙제 재귀 + for반복 함수 둘 다 구현
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define INPUT_SIZE 10

int fibo_recursive(int n);
int fibo_iterative(int n);

int main() {
    while(1) {
        char input[INPUT_SIZE];

        printf("피보나치 수열의 항 번호를 입력하세요 (입력 없을 시 종료): ");

        if(fgets(input, INPUT_SIZE, stdin) == NULL) {
            break;
        }
        else {
            char *ptr;
            ptr = strchr(input, '\n');
            if(ptr != NULL) {
                *ptr = '\0';
            }
            char *endptr;
            int num = strtol(input, &endptr, 10);
            if (endptr == input || *endptr != '\0') {
                break;
            }
            else if(errno == ERANGE) {
                printf("입력한 수가 너무 큽니다.\n");
                errno = 0;
                continue;
            }
            else if(num < 0) {
                printf("음수는 입력할 수 없습니다.\n");
                continue;
            }
            else {
                printf("재귀: %d\n", fibo_recursive(num));
                printf("반복: %d\n", fibo_iterative(num));

            }
        }

    }
    
    return EXIT_SUCCESS;
}

int fibo_recursive(int n) {
    if(n <= 1) {
        return n;
    }
    return fibo_recursive(n - 1) + fibo_recursive(n - 2);
}

int fibo_iterative(int n) {
    if(n <= 1) {
        return n;
    }
    int a = 0, b = 1, temp;
    for(int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}
