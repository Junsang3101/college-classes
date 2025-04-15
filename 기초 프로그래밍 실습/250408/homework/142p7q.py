# A, B가 주사위를 던져서 비교 후 승 무 패 출력

import random

    # A, B, tmp, alp선언 및 초기화
A=0;
B=0;
tmp=0;
alp=65

    # 값 할당 및 출력
for i in range(0, 2, 1):
    print(f'{alp}의 주사위 숫자는 ', end='')
    for j in range(0, 2, 1):
        tmp = random.randrange(1, 7, 1)
        print(f'{tmp}', end='')
        if j==0:
            print(' ', end='')
        if i==0:
            A += tmp
        else:
            B += tmp
    print('입니다.')

if A>B:
    print("A가 이겼네요.")
elif B>A:
    print("B가 이겼네요.")
else :
    print("둘이 비겼네요.")
