foods = {'떡볶이':"오뎅",
         '짜장면':"단무지",
         '라면':"김치",
         '피자':"피클",
         '맥주':"땅콩",
         '치킨':"치킨무",
         '삼겹살':"상추"}

for k in foods.keys():
    print(f"{k} ", end='')
user_input = input("중 가장 좋아하는 음식은? : ")
if user_input in foods.keys():
    print(f"{user_input}의 짝꿍은 {foods.get(user_input)}")
else:
    print("잘못된 입력")

while (True):
    for k in foods.keys():
        print(f"{k} ", end='')
    user_input = input("중 가장 좋아하는 음식은? : ")
    if user_input in foods:
        print(f"{user_input}의 짝꿍은 {foods.get(user_input)}")
    elif user_input == "끝":
        break
    else:
        print("잘못된 입력")
