i, hap = 0, 0
num1, num2, num3 = 0, 0, 0

num1 = int(input("시작값을 입력해 주세요 :"))
num2 = int(input("끝값을 입력해 주세요 :"))
num3 = int(input("증가값을 입력해 주세요 :"))

while (num1<num2):
    print(f'{num1}')
    hap += num1
    num1 += num3

print(f"{hap}")
