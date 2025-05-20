#include <stdio.h>
#include <math.h>

int main () {
    int grade = 1, cnt = 0;
    double total=0, avg = 0;

    while (grade) {
        printf("성적 : ");
        scanf("%d", &grade);
        total += grade;
        if (grade != 0) cnt++;
    }
    avg = round(total / cnt);
    printf("평균 : %.2lf\n", avg);

    return 0;
}
