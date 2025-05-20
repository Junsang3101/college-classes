#include <stdio.h>
#include <math.h>

int main() {

    double a, b;
    a = (0.3 * 3) + 0.1;
    b = 1;
    printf("a==b의 결과: %d\n", a == b);
    // fabs() 는 floating point absolute value 의 준말로, 실수의 절대값을 표현한다.
    // 따라서 아래에서 두 수의 오차를 절대값으로 만든 뒤 0.0001 보다 오차가 작다면 논리 연산자로 참을 나오게 하는 것이다.
    printf("fabs(a-b)<0.0001의 결과: %d \n", fabs(a-b) < 0.0001);

    return 0;
}
