'''
def funcname(): 로 함수를 선언하고 원하면 return 할 수 있다.
'''
def plus(v1, v2):
    return v1 + v2

def sub(v1, v2):
    return v1 - v2

def multi(v1, v2):
    return v1 * v2

def divide(v1, v2):
    return v1 / v2

print(f"100과 200의 plus() 함수 결과는 {plus(100, 200)}")
print(f"100과 200의 sub() 함수 결과는 {sub(100, 200)}")
print(f"100과 200의 multi() 함수 결과는 {multi(100, 200)}")
print(f"100과 200의 divide() 함수 결과는 {divide(100, 200)}")
