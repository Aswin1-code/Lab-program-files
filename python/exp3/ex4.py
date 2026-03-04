n=int(input("Enter range: "))
fib,j=[0,1],1
while fib[-1]<n:
    j+=1
    fib.append(fib[-1]+fib[-2])
print(fib[:j])
