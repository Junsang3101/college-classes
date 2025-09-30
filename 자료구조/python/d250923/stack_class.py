from ArrayStack import ArrayStack

s = ArrayStack(100)

msg = input("문자열 입력: ")
for i in msg:
    s.push(i)

print("문자열 출력: ", end='')
for i in msg:
    print(s.pop(), end='')
print()
print(s)