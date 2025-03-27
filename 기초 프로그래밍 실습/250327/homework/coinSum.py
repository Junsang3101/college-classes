money = 0
c500 = int(input("500원짜리 개수 --> "))
c100 = int(input("100원짜리 게수 --> "))
c50 = int(input("50원짜리 개수 --> "))
c10 = int(input("10원짜리 개수 --> "))

money = c500*500 + c100*100 + c50*50 + c10*10
print(f"## 동전의 합계 ==> {money}원")