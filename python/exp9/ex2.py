def res(s):
    u,l=0,0
    for i in s:
        if i.isupper():
            u+=1
        elif i.islower():
            l+=1
    print(f"{s} has {u} upper case letter and {l} lower case letters")
res(str(input("Enter a string: ")))


