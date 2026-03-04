dic1={'a':1,'b':2}
dic2={'c':3,'d':4}
dic1_cp=dic1.copy()
#print(f"Using | : {dic1|dic2}")
UnPacked={**dic1,**dic2}
print(f"Using dictionary unpacking: {UnPacked}")
dic1.update(dic2)
print(f"Using update() :{dic1}")
for key,val in dic2.items():
    dic1_cp[key]=val
print(f"Using for loop: {dic1}")

