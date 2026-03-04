import itertools
inp=eval(input("Enter nested tuple values: "))
f=tuple(itertools.chain(*inp))
print(f)
