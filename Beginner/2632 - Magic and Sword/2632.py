import math

magic_ranges = [
    [0, 20, 30, 50],
    [0, 10, 25, 40],
    [0, 25, 55, 70],
    [0, 18, 38, 60]
]

T = int(input())

while T > 0:
    w, h, x0, y0 = map(int, input().split())
    magic, N, Cx, Cy = input().split()
    N = int(N)
    Cx = int(Cx)
    Cy = int(Cy)

    Px = x0 if Cx < x0 else (x0 + w) if Cx > x0 + w else Cx
    Py = y0 if Cy < y0 else (y0 + h) if Cy > y0 + h else Cy

    dist = math.sqrt((Cx - Px) ** 2 + (Cy - Py) ** 2)
    damage = 0

    if magic == "fire" and dist <= magic_ranges[0][N]:
        damage = 200
    elif magic == "water" and dist <= magic_ranges[1][N]:
        damage = 300
    elif magic == "earth" and dist <= magic_ranges[2][N]:
        damage = 400
    elif magic == "air" and dist <= magic_ranges[3][N]:
        damage = 100

    print(damage)
    T -= 1