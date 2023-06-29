A = int(input())
N = int(input())

views = int(0)

for i in range(N):
    F = int(input())
    if F*A >= 40000000:
        views += 1

print(views)