# 1 ~ 20까지의 난수를 인덱스 20개의 리스트에 저장한 후
# 리스트 안에 있는 숫자를 얻는다.

import random

num = []                        # 20개의 값을 저장할 array

# num[] 에 1~20 까지 20개 할당
for i in range(0, 20, 1):
    num.append(random.randrange(1, 20, 1))
    #print(f"{num[i]}")

for i in range(1, 20, 1):
    for j in range(0, 20, 1):
        if (num[j] == i):
            print(f'숫자 {num[j]}는(은) 뽑혔습니다.')
            break;

