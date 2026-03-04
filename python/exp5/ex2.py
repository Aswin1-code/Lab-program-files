l=[10,20,30,10,40,30,20]
print(f"Not preserving order: {list(set(l))}")
uL=[]
for i in l:
   if i not in uL:
      uL.append(i)
print(f"Preserving order: {list(set(uL))}")

