g=[int(i) for i in list(input("Enter values: ").split())]
Tup=tuple(g)
print(Tup)
l=list(Tup)
t=[]
for i in l:
    if i not in t:
        t.append(i)
print(tuple(t))
