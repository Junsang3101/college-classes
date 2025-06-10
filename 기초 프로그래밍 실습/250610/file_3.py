inFp = None
inList = []
inStr = ""

inFp = open("./data1.txt", "rt", encoding="utf=8")
#inList = inFp.read()
#print(inList)
inList = inFp.readlines()
for inStr in inList:
    print(inStr, end="")

inFp.close()
