list = []
total = 0
buffer = 0

#입력
print("배열에 넣을 값 10개를 입력해주세요.")
for i in range(10):
    while True:
        buffer = int(input(f"{i}번 인덱스 : "))
        if (buffer != 100):
            break
    list.append(buffer)

# 출력
print(list)

#평균
for i in range(10):
    total += int(list[i])
print(f"평균 : {total/10}")

#단일 치환
list[4] = 95
print(f"list[4] = {list[4]}")

#삭제
list[:4] = []
print(list)
