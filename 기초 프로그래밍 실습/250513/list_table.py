list=[[80, 50],
      [66, 85],
      [99, 84],
      [98, 74],
      [40, 50],
      [0, 0]]

for i in range(5):
    for j in range(2):
        list[5][j] += list[i][j]
        print(f"{list[i][j]:3}", end=" ")
    print()
print(f"{list[5][0]:3} {list[5][1]:3}");
