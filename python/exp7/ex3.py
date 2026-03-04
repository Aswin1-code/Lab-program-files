def sumAll(d):
    s=0
    for val in d.values():
        s+=val
    print(f"New dictionary: {d}")
    print(f"sum of values: {s}")
l=[i for i in range(1,int(input("Enter range: "))+1)]
d={}
for i in l:
    d[i]=i**2
sumAll(d)
