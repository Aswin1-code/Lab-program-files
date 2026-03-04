st=str(input("Enter a string: "))
sp=" "
s,a,d=0,0,0
for i in st:
    if i==sp:
        s+=1
    if i.isdigit():
        d+=1
    if i.isalpha():
        a+=1
print(f"Given string {st} contains {s} spaces, {d} digits and {a} alphabets")

