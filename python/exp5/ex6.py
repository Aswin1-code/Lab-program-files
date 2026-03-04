l=[int(i) for i in list(input("Values: ").split())]
s,i=int(input("Start: ")),int(input("End: "))
nL=[]
nL.append([x for x in l[s-1:i+1] if x%2!=0])
print(nL)

