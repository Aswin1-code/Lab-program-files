def add_element(s):
    c=int(input("Val to add: "))
    if c not in s:
        s.add(c)
        print(f"{s}: is the new set")
    else:
        print(f"{c} already found")
def remove_element(s):
    c=int(input("Val to remove: "))
    if c in s:
        s.remove(c)
        print(f"{s}: is the new set")
    else:
        print(f"{c} not found")
l=[int(i) for i in list(input("Values: ").split())]
s=set(l)
print(f"Unique elements are: {s}")
add_element(s)
remove_element(s)
