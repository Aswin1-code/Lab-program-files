a,b,c=float(input("Enter number1: ")),float(input("Enter number2: ")),float(input("Enter number3: "))
if a>=b and a>=c:
   l=a
elif b>=a and b>=c:
   l=b
else:
   l=c
print('{} is the largest among {},{},{}'.format(l,a,b,c))
