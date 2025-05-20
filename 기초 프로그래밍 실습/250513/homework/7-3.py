list = []
hap = 0

for i in range(4):
    list.append(int(input(f"{i}번째 인덱스 : ")))
    hap += list[i]

print(f"합계 : {hap}")
