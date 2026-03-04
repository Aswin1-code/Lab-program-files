t=tuple(input("Enter tuple1 values: ").split())
s,e=int(input("Start: ")),int(input("End: "))
n_t=t[s-1:e]
print(n_t)
print(t[e:len(t)+1])
