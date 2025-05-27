import random

def getnumber():
    lotto_list = []
    for i in range(6):
        lotto_list.append(random.randint(1,45))
    return lotto_list
