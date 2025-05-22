str = "파이썬은완전재미있어요"

for i in range(0, len(str), 1):
    if (i % 2 == 1):
        print("#", end = '')
    else:
        print(f"{str[i]}", end = '');
