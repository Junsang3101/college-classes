n=0

for i in range(1, 101):
    if (i%3==0):
        continue
    n += i

print(f"3의 배수를 제외한 1~100까지의 합계{n}")
