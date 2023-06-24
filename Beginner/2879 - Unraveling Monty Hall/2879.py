num = int(input())
B = 0

for _ in range(num):
    if int(input()) != 1:
        B += 1

print(B)