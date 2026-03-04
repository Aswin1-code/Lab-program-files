import math
c=int(input("Enter choice:\n1.Simple interest\n2.Compound interest\n"))
if c==1:
   p,n=float(input("Enter principle amount: ")),float(input("\nEnter no.of yrs: "))
   r=float(input("\nEnter rate of interest: "))
   print("\nSimple interest: "+str((p*n*r)/100))
elif c==2:
   p,n=float(input("Enter principle amount: ")),float(input("Enter no.of yrs: "))
   r,t=float(input("Enter rate of interest: ")),float(input("Enter time period: "))
   t1=p*((1+((r/n)))**(n*t))
   print("Compound interest: ",t1)
else:
   print("Invalid choice")

