def big(a,b,c):
    if a>=b and a>=c:
        return a
    elif b>=a and b>=c:
        return b
    else:
        return c
n1,n2,n3=float(input("Enter num1: ")),float(input("Enter num2: ")),float(input("Enter num3: "))
print(f"{big(n1,n2,n3)} is largest of {n1},{n2},{n3}")
