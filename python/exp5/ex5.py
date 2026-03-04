r1=[int(i) for i in list(input("Values of row_1: ").split())]
r2=[int(i) for i in list(input("Values of row_2: ").split())]
r3=[int(i) for i in list(input("Values of row_3: ").split())]
r1.extend(r2)
r1.extend(r3)
print(r1)
i,j,k=0,1,2
t1,t2,t3=[],[],[]
while k<len(r1):
    t1.append(r1[i])
    t2.append(r1[j])
    t3.append(r1[k])
    i,j,k=i+3,j+3,k+3
res=[]
print("Transpose of the matrix: ")
print(f"{t1}")
print(f"{t2}")
print(f"{t3}")
res.append(t1)
res.append(t2)
res.append(t3)
print(f"{res} is the transpose of the matrix in list form")
