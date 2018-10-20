def Sort(tab):
    n=len(tab)
    swapped = True
    while swapped:
        swapped=False
        for j in range(0,n-1):
            if tab[j] > tab[j+1]:
                temp = tab[j]
                tab[j]=tab[j+1]
                tab[j+1]=temp
                swapped=True

    return tab
print(Sort([0,10,-50,100,6,0.5,1234]))
