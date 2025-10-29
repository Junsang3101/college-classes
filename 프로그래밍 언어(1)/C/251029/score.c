#include <stdio.h>

#define STUDENT 3

int main() {
    int score[STUDENT];
    int total = 0;
    for (int i=0; i<STUDENT; i++) {
        scanf("%d", &score[i]);
        total += score[i];
    }
    int avg = total / STUDENT;
    printf("%d", avg);
    
    return 0;
}