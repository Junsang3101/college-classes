outFp = None
outStr = ""

outFp = open("./data2.txt", "wt", encoding="utf=8")

while True:
    outStr = input("내용 입력 : ")
    if outStr == "":
        break
    outFp.writelines(outStr + '\n')

outFp.close()
