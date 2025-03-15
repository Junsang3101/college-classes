import turtle
import random

'''
turtle 사용자 정의부임!
'''
isMoving = False

def turtleBlowup(min=1, max=3, delay=100):
    global pSize
    for i in range(min, max):
        turtle.shapesize(i, i, i)
        # 'lambda: None'은 ontimer가 함수 인자를 받아야 하기 떄문에 임의로 아무 내용 없는 함수를 만들어 사용
        turtle.ontimer(lambda: None, 200)
        pSize = i
    turtle.shapesize(1, 1, 1)

def turtleC():
    print('is Moving!')
    turtleBlowup()

def turtleLC(x, y):
    global isMoving
    if isMoving == False:
        isMoving = True
        turtle.pendown()
        turtle.goto(x, y)
        isMoving = False
    else:
        turtleC()

def turtleRC(x, y):
    global isMoving
    if isMoving == False:
        isMoving = True
        turtle.penup()
        turtle.goto(x, y)
        isMoving = False
    else:
        turtleC()

def turtleMC(r=0, g=0, b=0):
    global isMoving
    if isMoving == False:
        r = random.random()
        g = random.random()
        b = random.random()
        turtle.color(r, g, b)
    else:
        turtleC()
        
'''
# turtleClick() 으로 LC, RC, MC를 하나의 함수에서 사용할려고 했지만,
# turtle.onscreenclick()으로 x, y인자밖에 받을 수 없기 때문에
# mouse 인자를 못 받아 사용할 수 없음.
def turtleClick(x, y, mouse=1):
    global isMoving
    if isMoving == True:
        print('is Moving!')
        turtleBlowup()

    elif mouse == 1:
        isMoving = True
        turtle.pendown()
        turtle.goto(x, y)
        isMoving = False

    elif mouse == 2:
        isMoving = True
        turtle.pendown()
        turtle.goto(x, y)
        isMoving = False

    elif mouse == 3:
        turtle.color(random.random(), random.random(), random.random())
'''
