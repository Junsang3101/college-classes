inFp = None
inStr = ""

inFp = open("./data1.txt", "rt", encoding="utf=8")

inStr = inFp.readline()
print(inStr, end="")

inStr = inFp.readline()
print(inStr, end="")

inStr = inFp.readline()
print(inStr, end="")

inFp.close()
