class ArrayList:
    def __init__(self, capacity=100):
        self.capacity = capacity
        self.array = [None] * capacity
        self.size = 0

    def isempty(self):
        if self.size == 0: return True
        else: return False

    def isfull(self):
        if self.size == self.capacity: return True
        else: return False

    def getEntry(self, pos):
        if 0 <= pos < self.size: return self.array[pos]
        else: return None

    def insert(self, pos, e):
        if not self.isfull() and 0 <= pos <= self.size:
            for i in range(self.size, pos, -1):
                self.array[i] = self.array[i-1]
            self.array[pos] = e
            self.size += 1
        else:
            print("리스트 overFlow 또는 유효하지 않은 삽입 위치")
            exit()

    def delete(self, pos):
        if not self.isempty() and 0 <= pos <= self.size:
            e = self.array[pos]
            for i in range(pos, self.size-1):
                self.array[i] = self.array[i+1]
            self.size -= 1
            return e
        else:
            print("리스트 underFlow 또는 유효하지 않은 삭제 위치")
            exit()
    
    def __str__(self):
        return str(self.array)