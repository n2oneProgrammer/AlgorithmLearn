import random

def Search(tab,searchNum):
    length = len(tab)
    for i in range(100):
        j = random.randint(0,length-1)
        if tab[j] == searchNum:
            return j+1


print(Search([1,2,3,4,5,6,7,8,9],4))
