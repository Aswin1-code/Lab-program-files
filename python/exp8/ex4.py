l1=[int(i) for i in list(input("set 1 values: ").split())]
l2=[int(i) for i in list(input("set 2 values: ").split())]
s1,s2=set(l1),set(l2)
if s2.issubset(s1)==True:
    print(f"{s2} is subset of {s1}")
if s1.issubset(s2)==True:
    print(f"{s1} is subset of {s2}")
if s1.issubset(s2)==False and s2.issubset(s1)==False:
    print(f"{s1} and {s2} is not a subset in either way")

