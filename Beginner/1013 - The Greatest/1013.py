A, B, C = input().split(' ')
A = int(A)
B = int(B)
C = int(C)

aux = int((A + B + abs(A - B)) / 2)

if (aux > C):
    print(f"{aux} eh o maior")
else:
    print(f"{C} eh o maior")
