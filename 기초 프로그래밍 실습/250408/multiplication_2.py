# 2 ~ 9단까지 모두 출력

for i in range(2, 10, 1):
    print(f"### {i}단###")
    for j in range(1, 10, 1):
        print(f"{i} x {j} = {i*j:>2}")
    print('')
