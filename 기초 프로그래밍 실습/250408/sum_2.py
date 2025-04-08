# result 선언 & 정의
result = 0

# 반복문 매개변수 선언 & 정의
start = int(input("시작값 : "))
end = int(input("종료값 : "))
add = int(input("증가값 : "))

for i in range(start, end+1, add):
    result += i

print(f'{start}부터 {add}씩 {end}까지 더한 값 : {result}')
