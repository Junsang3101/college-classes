#include <stdio.h>
// 기호 상수(symbolic constant)로 전처리한다.
#define TAX_RATE 0.2

int main()
{
    // 상수로 선언 된 변수
    const int MONTHS= 12;
    int m_salary, y_salary;

    printf("월급을 입력하시요:");
    scanf("%d", &m_salary);
    y_salary = MONTHS * m_salary;
    printf("연봉은 %d입니다.", y_salary);
    printf("세금은 %d입니다.", y_salary * TAX_RATE);

    return 0;
}