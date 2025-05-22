str = "(파이썬 최고!"

if True != str.startswith('('):
    str = '(' + str

if True != str.endswith(')'):
    str = str + ')'

print(str)
