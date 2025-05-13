nums = []
hap = 0

for i in range(4):
    nums.append(int(input(str(i+1) + "번째 정수를 입력해 주세요:")))
    hap += nums[i]

print(f"입력한 정수의 총 합은 {hap}입니다.")
