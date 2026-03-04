import math
print("Area of triangle:\nChoices:\n1.Two values \n2.Three values")
c=int(input("Enter your choice"))
if c==1:
   b,h=float(input("Enter base: ")),float(input("Enter height: "))
   if b<0 or h<0:
      print("Invalid values")
   else:
      print("Area of triangle is: "+str(0.5*b*h))
elif c==2:
   a,b,c=float(input("Enter side1: ")),float(input("Enter side2: ")),float(input("Enter side3: "))
   if a<0 or b<0 or c<0:
      print("Invalid value")
   else:
      s=(a+b+c)/2
      t=s*(s-a)*(s-b)*(s-c)
      print("Area of triangle is: " + str(math.sqrt(t)))
else:
   print("Invalid choice")


