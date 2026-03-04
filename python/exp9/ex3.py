from collections import defaultdict
s=str(input("Enter a string: "))
#s="google"
r_map=defaultdict(list)
for i in s:
    r_map[i].append(i)   
for key,val in r_map.items():
    print(f"{key}:{len(val)}")
