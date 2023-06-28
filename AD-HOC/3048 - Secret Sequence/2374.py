N = int(input())

aux = int(0) 
sequence = int(0)

for i in range (N):
    V = int(input())
    if V!=aux:
        aux=V
        sequence+=1

print(sequence)