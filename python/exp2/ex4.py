n1,n2=int(input("Enter num1:")),int(input("Enter num2: "))
GCD=1
n=min(n1,n2)
for i in range(1,n+1):
   if n1%i==0 and n2%i==0:
      GCD=i
LCM=(n1*n2)/GCD
print('{} is the LCM of {} and {}'.format(LCM,n1,n2))
