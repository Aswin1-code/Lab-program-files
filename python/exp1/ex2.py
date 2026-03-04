import math
a,b,c=float(input("Enter coeff1: ")),float(input("Enter coeff2:")),float(input("Enter coeff3: "))
t1=(b**2)-(4*a*c)
if t1>=0:
   t2=math.sqrt(t1)
   r1=(((-b)+t2)/(2*a))
   r2=(((-b)-t2)/(2*a))
   print("Roots are: "+str(r1)+" ,:, "+str(r2))
else:
   t2=math.sqrt(-t1)
   r1=(((-b)+t2)/(2*a))
   r2=(((-b)-t2)/(2*a))
   print("Roots are: "+str(r1)+"j\t"+str(r2)+"j")

