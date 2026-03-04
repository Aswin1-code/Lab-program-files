print("Temp: warm, cool :: humidity: dry, humid")
#t=" "
#h=" "
t,h=str(input("Temperature: ")),str(input("Humidity: "))
if t=="warm" and h=="dry":
   s="Basket Ball"
elif t=="warm" and h=="humid":
   s="tennis"
elif t=="cool" and h=="dry":
   s="cricket"
elif t=="cool" and h=="humid":
   s="swimming"
else:
   print("Invalid Data")
print('{} is the suitable sports during {} and {} climate condition'.format(s,t,h))
