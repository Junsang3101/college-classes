sum = 0
for i in range(1, 101):
    sum += i
    if (sum >= 1000):
        break;

print(f"1 ~ 100의 합계를 최초로 1000이 넘게하는 숫자: {i}")
