def caculation_fomula():
    while True:
        a = int(input("숫자1 :"))
        if a==0:
            break
        b = int(input("숫자2 :"))
        if b==0:
            break
        c = input("연산자 :")


        if (c == '+'):
            printf(f"{a} {c} {b} = {a+b}");
        elif (c == '-'):
            printf(f"{a} {c} {b} = {a-b}");
        elif (c == '*'):
            printf(f"{a} {c} {b} = {a*b}");
        elif (c == '/'):
            printf(f"{a} {c} {b} = {a/b}");
        elif (c == '%'):
            printf(f"{a} {c} {b} = {a%b}");
        elif (c == '//'):
            printf(f"{a} {c} {b} = {a//b}");
        else:
            print("잘못된 연산자입니다.")
            break

print("0 혹은 잘못된 연산자 입력시 종료합니다.")
caculation_fomula()
print("종료")
