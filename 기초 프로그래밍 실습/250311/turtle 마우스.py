import turtle
import random

isMoving = False
pSize = 10
speed = 5

def turtleBlowup(min=1, max=3, delay=100):
    global pSize
    for i in range(min, max):
        turtle.shapesize(i, i, i)
        # 'lambda: None'은 ontimer가 함수 인자를 받아야 하기 떄문에 임의로 아무 내용 없는 함수를 만들어 사용
        turtle.ontimer(lambda: None, 200)
        pSize = i
    turtle.shapesize(1, 1, 1)

def turtleClick(x, y, mouse):
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

# 아랫 코드로 마우스 클릭 별 함수로 분리해서 사용 가능 기능적 차이 X 
'''
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
# 기본 설정
turtle.title("Press 'Q' to exit")
turtle.shape('turtle')
turtle.pensize(pSize)
turtle.listen()

# 마우스, 키보드 이벤트 
turtle.onkey(turtle.bye, 'q')
turtle.onscreenclick(turtleClick, 1)
turtle.onscreenclick(turtleClick, 2)
turtle.onscreenclick(turtleClick, 3)

# 위 이벤트들을 루프시켜줌, 다른 onkey, onscreenclick 이벤트를 사용할 경우 추가해야함 위 기본 설정같은 이벤트가 아닌 함수는 루프하지 않음
turtle.mainloop()
