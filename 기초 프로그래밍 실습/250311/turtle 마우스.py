import turtle
import random
import turtleCM

turtleBlowup = turtleCM.turtleBlowup
turtleC = turtleCM.turtleC
turtleRC = turtleCM.turtleRC
turtleLC = turtleCM.turtleLC
turtleMC = turtleCM.turtleMC

pSize = 10
speed = 5

# 기본 설정
turtle.title("Press 'Q' to exit")
turtle.shape('turtle')
turtle.pensize(pSize)

# 마우스, 키보드 이벤트 
turtle.onkey(turtle.bye, 'q')
turtle.onscreenclick(turtleLC, 1)
turtle.onscreenclick(turtleMC, 2)
turtle.onscreenclick(turtleRC, 3)

# 위 이벤트들을 루프시켜줌, 다른 onkey, onscreenclick 이벤트를 사용할 경우
# 추가해야함 위 기본 설정같은 이벤트가 아닌 함수는 루프하지 않음
turtle.listen()
turtle.mainloop()
