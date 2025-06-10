inFp = None
outFp = None
inStr = ""

inFp = open("./data1.txt", "rt", encoding="utf=8")
outFp = open("./data3.txt", "wt", encoding="utf=8")

inList = inFp.readlines()
for inStr in inList:
    outFp.writelines(inStr)

inFp.close()
outFp.close()
