#include <stdio.h>

int main()
{
    float f=1.2345678912345;
    double d=1.2345678912345;
    printf("%.10f, %.10lf\n", f, d);

    /*
    float 보다 double이 더 정확한 걸 알 수 있다.
    float 보다 double이, double보다 long double이
    더 정밀도가 높다.

    왜냐하면, 컴퓨터는 소수를 exponent를 사용하여 저장하기 때문이다.
    ex) float 12345 -> 1.2345 x 10^4
        float 0.012345 -> 1.2345 x -10^3
    */

    double x = 1.0e20 + 5.0 - 1.0e20;
    double y = 1.0e20 - 1.0e20 + 5.0;
    printf("%.1e\n %.1e\n", x, y);

    /*
    1.0e20을 먼저 뺀 다음 5.0을 더하면 정상적으로 5.0이 나오지만,
    1.0e20을 빼지 않고 5.0을 더하면, 0.0이 나온다.

    이는 정밀도의 한계 때문이다.
    double 형의 정밀도는 15~16자릿수이기 때문에,
    유효 자릿수를 벗어난다.
    */

    return 0;
}

