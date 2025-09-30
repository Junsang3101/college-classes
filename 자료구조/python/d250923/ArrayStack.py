class ArrayStack:
    def __init__(self, capacity = 10):
        self.capacity = capacity
        self.top = -1
        self.arr = [None] * capacity
    
    def isFull(self):
        if self.top +1 == self.capacity:
            return True
        else:
            return False
        
    def isEmpty(self):
        if self.top == -1:
            return True
        else:
            return False
    
    def pop(self):
        if not self.isEmpty():
            self.top -= 1
            return self.arr[self.top+1]
        else:
            pass
    
    def push(self, inp):
        if not self.isFull():
            self.arr[self.top +1] = inp
            self.top += 1
        else:   
            pass

    def peek(self):
        if not self.isEmpty():
            return self.arr[self.top]
        else:
            pass

    def __str__(self):
        return str(self.arr[0:self.top+1])