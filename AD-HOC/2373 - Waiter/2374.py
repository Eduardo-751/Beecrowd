N = int(input())

broken = 0

for i in range(N):
    L, C = map(int, input().split())
    
    if C < L:
        broken += C

print(broken)