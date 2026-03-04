n=str(input("Enter a number: "))
l=n.split(',')
t=[]
d=0
for i in l:
	if (int(i,2))%5==0:
	   t.append(i)
print(t)
