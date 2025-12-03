#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} coordinate;

int main() {
    coordinate a, b;
    double xdiff, ydiff;

    printf("a(x, y) : ");
    scanf("%lf %lf", &a.x, &a.y);
    printf("b(x, y) : ");
    scanf("%lf %lf", &b.x, &b.y);
    xdiff = a.x - b.x;
    ydiff = a.y - b.y;
    
    printf("거리 : %.2lf", sqrt(xdiff * xdiff + ydiff * ydiff));

    return EXIT_SUCCESS;
}