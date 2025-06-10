inFp = None
inStr = ""

inFp = open("./data1.txt", "rt", encoding="utf=8")

while True:
    inStr = inFp.readline()
    if inStr == "":
        break;
    print(inStr, end="")

inFp.close()
