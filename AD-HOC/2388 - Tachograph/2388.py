dist = 0
N = int(input())

for i in range(N):
    input_values = input().split()
    T = int(input_values[0])
    V = int(input_values[1])
    dist += T * V

print(dist)