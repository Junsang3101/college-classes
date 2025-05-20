# tuple은 list와 구조가 같지만 불변성을 갖고있다.
tuple = ((1, 2, 3),
         (4, 5, 6),
         (7, 8, 9))

for i in range(3):
    for j in range(3):
        print(f"{tuple[i][j]} ", end="")
    print("")

