def Search(tab,searchNum):
    length = len(tab)
    for i in range(length):
        if tab[i] == searchNum:
            return i+1


print(Search([1,2,3,4,5,6],4))
