table = [300, 1500, 600, 1000, 150]
gramas = 225
i = 0

while i < 5:
    gramas += table[i] * int(input())
    i += 1

print(gramas)
