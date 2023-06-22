C = int(input())

while C > 0:
    N = int(input())
    result = 0 if N % 2 == 0 else 1
    print(result)
    C -= 1