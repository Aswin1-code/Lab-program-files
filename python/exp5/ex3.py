
def checkCommonVal(A,B):
    f=0
    for i in A:
        if i in B:
            f=1
            break
    if f==1: return True
    else: return False

def funcRem(r,l):
    while r in l:
        l.remove(r)
    return l

def addedResult(l1,l2):
    n=[]
    res=[]
    for i in l1:
        for j in l2:
            if i+j>=40:
                n.append(i)
                n.append(j)
            res.append(n)
            n=[]
    print(res)



l1=[int(i) for i in list(input("Enter list_1 values: ").split())]
l2=[int(i) for i in list(input("Enter list_2 values: ").split())]
print("List 1 is empty" if len(l1)==0 else "list 1 - not empty")
print("List 2 is empty" if len(l2)==0 else "list 2 - not empty")
print(f"Have common value: {checkCommonVal(l1,l2)}")
ln,rem=int(input("Enter list number(1 or 2): ")),int(input("Enter value to remove from the list: "))
if ln==1:
    n=funcRem(rem,l1)
elif ln==2:
    n=funcRem(rem,l2)
print(f"{n} is the list after removing the element: {rem}")
addedResult(l1,l2)
