inFp, outFp = None, None
inStr = ""
kor, eng, math = 0, 0, 0
name = ""
inList = []

inFp = open("./score_r.txt", "rt", encoding="utf=8")
outFp = open("./score_w.txt", "wt", encoding="utf=8")

inList = inFp.readlines()
for inStr in inList:
    name = inStr[0:3]
    kor = inStr[3:6]
    eng = inStr[6:9]
    math = inStr[9:12]
    hap = int(kor) + int(eng) + int(math)
    avg = hap / 3

    ret = name + " " + kor + " " + eng + " " + math + " " + str(hap) + " " + str(round(avg, 1)) + "\n"
    outFp.write(ret)

inFp.close()
outFp.close()
