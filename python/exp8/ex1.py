def check_elem(s):
    c=int(input("\nVal to chk: "))
    print("Element found" if c in s else "Not found")

l=[int(i) for i in list(input("Values with dup: ").split())]
s=set(l)
print(f"set: {s}")
print(f"length of set: {len(s)}")
for i in s:
    print(i,end=" ")
check_elem(s)
