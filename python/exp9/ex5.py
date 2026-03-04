s=str(input("Enter a string: ")).lower()
Ing,Ly="ing","ly" 
if len(s)>3:
    print(f"{s+Ly if Ing in s else s+Ing}")
else:
    print(f"{s}")
