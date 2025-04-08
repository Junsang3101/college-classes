# 1 ~ 100 까지의 값을 result 에 저장하여 출력한다.

result = 0  # result 선언 & 정의


for i in range(1, 101, 1):  # 1 ~ 100 까지 result 에 더한다.

    '''
    # 홀수의 값만 저장
    if (i % 2 == 1):
        result += i
    '''

    '''
    # 짝수의 값만 저장
    if (i % 2 == 0):
        result += i
    '''

    # 모든 수 저장
    result += i

print(result)   # result 출력
