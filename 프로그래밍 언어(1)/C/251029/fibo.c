// 숙제 재귀 + for반복 함수 둘 다 구현
// cmd -> chcp 65001 && fibo.exe
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <locale.h>

#define INPUT_SIZE 10

int fibo_recu(int num);
int fibo_iter(int num);

int main() {
    int input;
    
    setlocale(LC_ALL, "C.UTF-8");
    
    scanf("%d", &input);
    printf("재귀 : %d\n", fibo_recu(input));
    printf("반복 : %d\n", fibo_iter(input));

    return EXIT_SUCCESS;
}

int fibo_recu(int num) {
    if (num <= 1) return 1;
    return fibo_recu(num - 2) + fibo_recu(num - 1);
}

int fibo_iter(int num) {
    int arr[num + 1];
    for (int i = 1; i <= num + 1; i++) {
        if (i <= 2) arr[i] = 1;
        else {
            arr[i] = arr[i -2] + arr[i - 1];
        }
    }
    return arr[num+1];
}