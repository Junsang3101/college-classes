singer = {}

singer['이름'] = "트와이스"
singer['구성원 수'] = 9
singer['대뷔'] = "서바이벌 식스틴"
singer['대표곡'] = "SIGNAL"

'''
 keys() 메소드는 참조 배열과 유사한 형태로
실제 딕셔너리의 값들의 주소를 저장하는 뷰 객체를 반환함
반대로 values() 메소드도 있고 keys()의 반대임
'''
for k in singer.keys():
    # print(f"{k} -> {singer[k]}")
    print(f"{k} -> {singer.get(k)}") # 이럴 필요 없지만 기능을 보여주기 위함
