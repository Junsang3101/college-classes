#include <stdio.h>

int main ()
{
    char buffer[11];

    printf("A를 입력하시오 :");
    // scanf_s 는 Visual studio C++ 에서 제공하는 함수이기 때문에
    // gcc, gpp 에서 컴파일 할 수 없다.
    //scanf_s("%d", A);
    
    // fgets 로 문자열을 stdin 키보드 입력으로 받아서 처리한다.
    // fgets 는 문자열의 최대 수를 정해줘야 함으로 첫 번째 인자로
    // 문자열을 저장할 변수[ARRAY] 두 번째 인자로는 그 변수의 크기
    // EX) char buffer[11] <- 10글자 ASCII로 입력받을 수 있음
    // 마지막 엔터 '\n'도 입력을 받기 떄문에 -1 해야함
    // stdin 이 있는 세번째 인자는 입력을 받는 방법이다 stdin 은 표준 키보드 입력

    if (fgets(buffer, sizeof(buffer), stdin) == NULL) perror("입력 오류");
    // fgets 는 문자열임으로 %s를 사용 정수 로 사용하려면 atoi, strtol 으로 변환하거나,
    // sscanf를 사용해서 문자열에서 원하는 부분을 추출해야한다.
    // int A;
    // sscanf(buffer, %d, &A);
    // atoi는 시작이 숫자가 아니면 바로 0 을 반환하고,
    // 중간에 문자열을 만나면 그 전까지 값을 반환한다.
    // atoi(buffer);
    // char *strend;
    // char **endptr;
    // 첫 번째 인자는 변환할 문자열, 두 번째 문자열로 숫자가 끝나는 지점을 반환하는 이중 포인터
    // 세 번째 인자는 몇 진수인지를 가르키지만 아무것도 적지 않으면 자동으로 감지
    // ex> 아무것도 없으면 10진수, 0x 16진수, 0o 8진수, 0b 2진수
    // strtol(buffer, **endptr)
    // sscanf() 는 첫 번째 인자로 변환할 문자열, 두 번째 인자로 형식 지정자(format specifier)
    // 세 번째 인자로는 값을 저장할 변수이다.
    // sscanf(buffer, %d, &A);
    printf("%s", buffer);
    
    return 0;
}