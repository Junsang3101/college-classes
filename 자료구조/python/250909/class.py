class Car:
    def __init__(self, color, speed = 1):
        self.color = color
        self.speed = speed

    def speedup(self):
        self.speed += 10
    
    def speeddown(self):
        self.speed -= 10

    def display(self):
        print(self.color, ":", self.speed, sep = "", end = "\n")
    
car1 = Car("red", 0)
car2 = Car("black", 120)
car3 = Car("yellow")

car1.display()
car2.display()
car3.display()

car1.speedup()
car2.speeddown()

car1.display()
car2.display()
print(car1.speed)