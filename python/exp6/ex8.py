l=[]
print("Enter list of values , press z to end: ")
while True:
    inp=input()
    if inp=='z':
        break
    l.append(inp)
print(tuple(l))
