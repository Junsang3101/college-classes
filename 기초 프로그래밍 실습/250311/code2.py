# 파이썬은 input()함수의 문자열로 인식하기 때문에
# input()을 통해서 정수로 인식하게 해야한다 
a = int(input("첫 번째 숫자를 입력:"))
b = int(input("두 번째 숫자를 입력:"))

r = a + b
print(a, '+', b, '=', r)

r = a - b
print(a, '-', b, '=',r)

r = a * b
print(a, '*', b, '=',r)

r=a / b
print(a, '/', b, '/', r)
