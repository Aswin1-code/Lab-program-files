def union_op():
    l1=[int(i) for i in list(input("set 1 values: ").split())]
    l2=[int(i) for i in list(input("set 2 values: ").split())]
    s1,s2=set(l1),set(l2)
    s3=s1.union(s2)
    print(f"Union: {s3}")
    
def intersection_op():
    l1=[int(i) for i in list(input("set 1 values: ").split())]
    l2=[int(i) for i in list(input("set 2 values: ").split())]
    s1,s2=set(l1),set(l2)
    s3=s1.intersection(s2)
    print(f"intersection: {s3}")
    
def difference_op():
    l1=[int(i) for i in list(input("set 1 values: ").split())]
    l2=[int(i) for i in list(input("set 2 values: ").split())]
    s1,s2=set(l1),set(l2)
    s3=s1-s2
    print(f"Differene: {s3}")
union_op()
intersection_op()
difference_op()
