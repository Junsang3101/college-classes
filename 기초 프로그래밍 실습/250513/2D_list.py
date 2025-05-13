list1 = []
cnt = 0

for i in range(4):
    list2 = []
    for j in range(3):
        list2.append(cnt)
        cnt += 1
    list1.append(list2)

print(list1)
