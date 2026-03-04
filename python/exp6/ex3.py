g=[int(i) for i in list(input("Enter values: ").split())]
Tup=tuple(g)
ch=int(input("Enter a value to check in tuple(int) :"))
if Tup.count(ch)==0:
    print(f"{ch} is not present in tuple")
else:
    print(f"{ch} is present in tuple for {Tup.count(ch)} times")

