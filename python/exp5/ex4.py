l=[int(i) for i in list(input("Values: ").split())]
even=[i for i in l if i%2==0]
even.extend([i for i in l if i%2!=0])
print(even)

