import math 
def prime(n):
    flag=1
    for i in range(2,int(math.sqrt(n))+1):
        if n%i==0:
            flag=0
            break
    return flag
a=int(input("Enter num: "))
if prime(a)==1:
    print(f"{a} is a prime number")
else:
    print(f"{a} is not a prime number")
