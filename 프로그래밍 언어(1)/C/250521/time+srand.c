#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int answer = abs(rand()) % 101;
    printf("%d\n", answer);
    int guess;
    int tries = 0;
    do {
        printf("정답을 추측하여 보시오 (1 ~ 100) : ");
        scanf("%d", &guess);

        if (guess > answer) {
            printf("Low\n");
        }
        else if (guess < answer) {
            printf("HIGH\n");
        }

        tries++;
    } while (answer != guess);

    printf("축하합니다. 시도횟수 = %d\n", tries);
}
