def newPair(k,v,d):
    d[k]=v
    sort2=dict(sorted(d.items(),key=lambda item:item[0],reverse=True))
    print(f"Desc order: {sort2}")


n=int(input("No. of pairs: "))
d={}
while n>0:
    ke=int(input("Key: "))
    v=int(input("Val: "))
    d[ke]=v
    n-=1
sort1=dict(sorted(d.items(),key=lambda item: item[1]))
print(f"Asc order: {sort1}")
k,v=int(input("New Key: ")),int(input("New Val: "))
newPair(k,v,d)
