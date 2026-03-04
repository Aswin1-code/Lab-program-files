orig=int(input("Enter a number: "))
n,res=orig,0
while n!=0:
   rem=n%10
   res+=rem*rem*rem
   n/=10
if orig==res:
   print('{} is the amstrong number'.format(orig))
else:
   print('{} is not the amstrong number'.format(orig))

