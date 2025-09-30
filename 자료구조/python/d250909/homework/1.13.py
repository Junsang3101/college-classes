def fibo_1(target):
    if target > 1:
        return fibo_1(target - 1) + fibo_1(target - 2)
    elif target == 1:
        return 1
    else:
        return 0
    
def fibo_2(target):
    fibo_list = [0, 1, 1]
    if target > 2:
        for i in range(2, target, 1):
            fibo_list.append(fibo_list[i-1] + fibo_list[i])
    return fibo_list[target]

user_Input = int(input())

print(fibo_1(user_Input))
print(fibo_2(user_Input))