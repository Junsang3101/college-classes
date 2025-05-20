#include <stdio.h>

int main () {

    /*
     * 연산을 할 때 정수형 자료형들은 int 형으로 자동으로 형변환 하여 연산을 하는데 이걸 정수형 승격(integer promotion) 이라고 한다.
     * 실수형 자료형들도 double 형으로 자동으로 형변환 하여 연산을 하는데, 이걸 실수형 승격(floating-point promotion) 이라고 한다.
     * 이러한 승격을 하는 이유는 자료형의 크기를 벗어나는 연산이 이루어 질 경우 데이터 손실을 예방하기 위해서 이다.
     * 하지만 C언어 에서는 실수형 승격을 하지 않는다. 왜냐하면, double 형 변수는 연산이 float보다 훨신 느리고,
     * 통상적으로 float으로도 충분하기 때문이다.
     *
     * 연산을 하는 값의 자료형이 다를 경우에는 더 큰 자료형으로 자동으로 형변환 한다.
     * 아래 프린트 구문을 보면 a는 int b는 double으로 double형이 더 크기 때문에 double형으로 자동으로 형변환 하여 연산한다.
     * 이러한 연산 과정을 일반적인 산술 변환(Usual Artithentic Conversion)이라고 한다.
     *
     * 연산이 끝난 후에 저장할 변수형에 따라 값을 맞춰 형변환 하는데, 이를 비명시적 형변환(implicit type conversion) 이라고 한다. -> 27
     * (type)을 변수 앞에 붙여서 변수를 명시적으로 변환해 줄 수 도 있다. 이를 명시적 형변환(explicit type conversion) 이라고 한다. -> 26
     * 만약 비명시적으로 형변환 된 값을 다른 자료형 형식 지졍자를 사용하면 의도하지 않은 값이 출력된다. -> 26
     */

    int a = 10;
    double b = 5.5;

    printf("%d\n", a + b);
    printf("%d\n", a + (int)b);
    printf("%.1lf\n", a + b);

    return 0;
}
