num = int(input("정수를 입력해 주세요:"))

for i in range(1, num+1, 1):
    if (num % i == 0):
        print(f"{i} ", end="")

print("")
