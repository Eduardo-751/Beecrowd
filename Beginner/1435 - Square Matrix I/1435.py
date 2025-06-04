import math

N = int(input())
while N != 0:
    aux = 1
    limit = math.ceil(N/2)
    for i in range(N):
        aux2 = 0
        output = ""
        for j in range(N):
            if j < limit and aux2 < aux:
                aux2 += 1
            if j >= limit and aux2 > 1:
                aux2 -= 1
            output += str(aux2)
        print(output)
        if i < limit:
            aux += 1
        if i >= limit:
            aux -= 1
    N = int(input())
 