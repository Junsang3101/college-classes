score = int(input("점수를 입력하세요 : "))

if score > 100:
    print("X")
elif score >= 100:
    print("A")
elif score >= 90:
    print("B")
elif score >= 80:
    print("C")
elif score >= 70:
    print("E")
else:
    print("F")

print("학점입니다.")