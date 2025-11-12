#include <stdio.h>
#include <stdlib.h>

int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept);

int main() {
    float s, y;

    if (get_line_parameter(3, 3, 6, 6, &s, &y)) {
        printf("에러\n");
    }
    else {
        printf("기울기는 %f, y절편은 %f\n", s, y);
    }

    return EXIT_SUCCESS;
}

int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept) {
    if (x1 == x2) {
        return -1;
    }else {
        // 1. 기울기 (m) 계산: (y2 - y1) / (x2 - x1)
        *slope = (y2 - y1) / (x2 - x1);
        
        // 2. y절편 (b) 계산: b = y1 - m*x1
        *yintercept = y1 - (*slope * x1);
        
        return EXIT_SUCCESS;
    }
}