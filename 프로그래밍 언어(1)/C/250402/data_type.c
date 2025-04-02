#include <stdio.h>

int main ()
{
    // 제일 작은 숫자 타입부터 가장 큰 숫자 타입까지의 정렬
    short year = 0;
    int sale = 0;
    long total_sale = 0;
    long long large_value = 0;

    year = 10;
    sale = 200000000;
    total_sale = year * sale;

    printf("totale_sale = %d\n", total_sale);

    return 0;
}