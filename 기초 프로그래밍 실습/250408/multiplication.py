# 구구단을 출력하는 프로그램

# 단 선언 & 정의
dan = int(input("단 : "))

# 출력
for i in range(1, 10, 1):
    print(f"{dan} x {i} = {dan*i:>2}")
