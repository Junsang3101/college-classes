num = int(input("정수를 입력해주세요:"))
count = 0;

for i in range(1, num+1, 1):
    if num % i == 0:
        count += 1;

if count == 2:
    print("소수입니다.")

else:
    print("소수가 아닙니다.")
