def Sort(tab):
    n=len(tab)
    for i in range(n):
        index=-1
        smallest = tab[i]
        for j in range(i,n):
            if tab[j] < smallest:
                smallest = tab[j]
                index=j
                temp = tab[i]
                tab[i]=smallest
                tab[index]=temp
    return tab
print(Sort([0,10,-50,100,6,0.5,1234]))
