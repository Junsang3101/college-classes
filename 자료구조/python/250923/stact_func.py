capacity = 3
stack_arr = [None] * capacity
top = -1

def isEmpty():
    global top
    if top == -1:
        return True
    else:
        return False
    
def isFull():
    global top
    if top +1 == capacity:
        return True
    else:
        return False

def push():
    global top, capacity
    if top != capacity - 1:
        stack_arr[top] = input()
        top += 1

def pop():
    global top
    if top != -1:
        top -= 1
        return stack_arr[top + 1]

def peek():
    if top != -1:
        return stack_arr[top]
    
print(isEmpty())
push()
push()
push()
print(isFull())
peek()
print(pop())
print(pop())
print(pop())
print(isEmpty())