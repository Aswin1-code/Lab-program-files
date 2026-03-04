import math
isprime=True
n=int(input("Enter no: "))
for i in range(2,int(math.sqrt(n)+1)):
    if n%i==0:
        isprime=False
        break
if isprime:
    print(f"{n} is a prime number")
else:
    print(f"{n} is not a prime number")
