num = 123
num2 = 1.23

print("Python 에서 format specifiers를 여러번 사용할 경우에는")
print("%(a, b, c)와 같이 튜플(불변 속성을 가진 리스트)을 사용해야함\n")

print("%와 d(format specifier) 사이에 숫자를 넣어서")
print("%5d줄맞춤, %05d로 빈 칸0출력 .n부동 소수점 뒤 숫자의 수를 조절할 수 있있고")
print("\'-\'를 사용해서 줄맞춤 방향을 지정할 수 있음\n")
print("%5d\n%05d" % (num, num))
print("%5.0f\n%05.1f\n%5.2f\n" % (num2, num2, num2))

print("f-string과 format()로 서식화 할 수 있다")
print("f-string은 \"\"전에 f를 적고 \"\"안에 {var}이렇게 format()는")
print("\"\"안에 {}로 위치만 정하고, \"\"뒤에 .format()을 사용하여 데이터 값을 전달 ")
print(f"{num}\n{num2}")
print("{}\n{}" .format(num, num2))