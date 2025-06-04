L = int(input())
T = input()

R=0.0
for i in range(12):
    for j in range(12):
        aux = float(input())
        if i == L:
            R += aux

if T == 'S':
    print(f'{R:.1f}')
else:
    print(f'{R/12:.1f}')