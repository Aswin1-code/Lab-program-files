def fact(n):
    if n<=1:
        return 1
    return n*fact(n-1)
f1=int(input("Enter non negative num: "))
print(f"{fact(f1)} is the factorial of {f1}")



