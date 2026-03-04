import math
def factors(n):
    f=[]
    l=[]
    flag=1
    for i in range(1,n+1):
        if n%i==0:
            f.append(i)
    for i in f[1:]:
        for j in range(2,int(math.sqrt(i))+1):
            if i%j==0:
               flag=0
               break
        if flag==1:
            l.append(i)
        
    return l
num=int(input("Enter num: "))
print(f"{factors(num)} are the prime factors of {num}")
