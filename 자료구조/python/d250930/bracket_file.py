from ..d250923.bracket import checkBrackets

filename = "ArrayStack.h"
infile = open(filename, "r", encoding="utf-8")
str = infile.read()
infile.close()
print("소스파일", filename, " ---> ", checkBrackets(str))