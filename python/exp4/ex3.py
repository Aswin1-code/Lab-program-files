def swap(a,b):
    a=a+b
    b=a-b
    a=a-b
    print(f"a:{a}, b:{b} ::-> after swapping ")
a,b=float(input("Enter num1: ")),float(input("Enter num2: "))
print(f"a:{a}, b:{b} ::-> before swapping ")
swap(a,b)
