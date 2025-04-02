#include <stdio.h>
#include <limits.h>

int main()
{
    // signed 타입과 unsigned 타입의 선언문으로,
    // signed 는 음수, 양수 를 표현하는 비트를 사용하고,
    // unsigned 는 사용하지 않는다. 따라서 unsigned 는 양수만 표현할 수 있는 대신, 
    // signed 타입보다 2배 큰 수를 사용할 수 있다.
    // unsigned 타입의 값을 출력하려면 format specifier 를 %u 로 써야한다.
    short s_money = SHRT_MAX;
    unsigned short u_money = USHRT_MAX;

    // 위 코드 블럭을 출력하면, -32768 와 0이 출력되는데, 
    // 최대값을 넘어가면 가장 낮은 값으로 다시 시작된다 2진수로 보여준다면,
    // ex) 0b1111 에서 1을 더하면 더이상 올라갈 수 없어 0b0000 이 되는거다.
    s_money = s_money + 1;
    printf("s_money = %d\n", s_money);
    u_money = u_money + 1;
    printf("u_money = %u\n", u_money);

    return 0;
}