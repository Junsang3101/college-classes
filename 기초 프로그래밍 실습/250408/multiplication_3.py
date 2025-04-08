# 구구단을 보기 좋게 만들기

# raws = 행
for raws in range (0,10,1):
    if (raws==0):
        print(' #2단#  #3단#  #4단#  #5단#  #6단#  #7단#  #8단#  #9단#')
    elif (raws>0):
        for dan in range(2, 10, 1):
            print(f' {dan}x{raws}={dan*raws:>2}', end='')
        print('')
