foods = {'떡볶이':"오뎅",
         '짜장면':"단무지",
         '라면':"김치",
         '피자':"피클",
         '맥주':"땅콩",
         '치킨':"치킨무",
         '삼겹살':"상추"}

for k in foods.keys():
    print(f"{k} ", end='')
print()

for k in foods.keys():
    print(f"{foods[k]} ", end='')
print("\n")

for k in foods.keys():
    print(f"{k}의 짝꿍은 {foods[k]}")
