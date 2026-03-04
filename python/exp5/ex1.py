l=[int(i) for i in list(input("Enter values: ").split())]
n=[i+5 for i in l]
print(n)
print(f"Greatest: {max(n)}, least: {min(n)}")

