#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 10;
    int c = 69;
    float f = 12.3;
    char *ip = (char*)&i;


    printf("%d의 주소 %p\n", i, &i);
    printf("%d의 주소 %p\n", c, &c);
    printf("%f의 주소 %p\n", f, &f);
    printf("자료형이 달라도 다 4byte\n");
    printf("하지만 값의 크기는 다름\n");
    printf("%d 을 형변환 해서 char(1byte)로 만들 수 있다\n", i);
    printf("4바이트 주소를 1바이트로 쪼개서 따로 접근 n진수 앞 0은 생략\n");
    printf("0x0000ffffffffffff -> 0xffffffffffff\n");
    printf("%p\n", ip);
    printf("%p\n", ++ip);
    printf("%p\n", ++ip);
    printf("%p\n", ++ip);
    
    return EXIT_SUCCESS;
}