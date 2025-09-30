from ..d250923.bracket import checkBrackets

filename = "ArrayStack.h"
with open(filename, "r") as infile:
    str = infile.read()
    print("소스파일", filename, " ---> ", checkBrackets(str))