d1,d2={},{}
n1=int(input("Enter no. of pairs 1: "))
while (n1>0):
    key=input("key: ")
    val=input("Val: ")
    d1[key]=val
    n1-=1
n2=int(input("Enter no. of pairs 2: "))
while (n2>0):
    key=input("Key: ")
    val=input("Val: ")
    d2[key]=val
    n2-=1
merged={**d1,**d2}
print(f"{merged} : merged dictionary")
