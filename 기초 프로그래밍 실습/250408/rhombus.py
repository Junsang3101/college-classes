# 입력받은 값 * 값 크기의 마름모를 출력한다.


# 0을 입력받을때까지 반복한다.
while (1):
    size = int(input("마름모의 크기(홀수) : ")) # 값을 size에 입력받는다.
    if size % 2 == 1:
        for i in range(0, size//2, 1):  # 마름모 윗쪽 부분 - 'i'가 점점 증가
            for j in range(i, size//2, 1):  # 띄어쓰기
                print(' ', end='')
            for j in range(0, i*2+1, 1):    # 색칠
                print('#', end='')
            print('')
        for i in range((size+1)//2, 0, -1): # 마름모 아랫쪽 부분 - 'i'가 점점 감소
            for j in range(i, (size+1)//2, 1):  # 띄어쓰기
                print(' ', end='')
            for j in range(1, i*2, 1):  # 색칠
                print('#', end='')
            print('')

    # 0 이면 중지, 홀수가 아니라면 오류 메세지 출력
    elif size == 0:
        break;
    elif size % 2 == 0:
        print("홀수를 입력해 주세요.\n")

